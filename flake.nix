{
  description = "RAxML-NG";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/release-23.05";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = (import nixpkgs) {
          inherit system;
        };
      in
      {
        packages = rec {
          raxml = pkgs.stdenv.mkDerivation rec {
            pname = "raxml-ng";
            version = "1.2.0";

            src = ./.;

            nativeBuildInputs = [ pkgs.cmake ];

            buildInputs = [ pkgs.bison pkgs.flex pkgs.gmp ];

            configurePhase = ''
              mkdir build && cd build
              cmake ..
            '';

            buildPhase = ''
              make
            '';

            installPhase = ''
              mkdir -p $out/bin
              mv bin/raxml-ng $out/bin
            '';
          };
          default = raxml;
        };
        apps = rec {
          hello = flake-utils.lib.mkApp { drv = self.packages.${system}.raxml; };
          default = raxml;
        };
      }
    );
}
