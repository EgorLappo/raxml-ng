#ifndef RAXML_CONSTANTS_HPP_
#define RAXML_CONSTANTS_HPP_

/* 1 = 1   | 2 = 2    | 3 = 16 | 4 = 4    | 5 = 32 | 6 = 64 | 7 = 0 | 8 = 8
 * 9 = 128 | 10 = 256 | 11 = 0 | 12 = 512 | 13 = 0 | 14 = 0 | 15 = 1023      */
const unsigned int pll_map_diploid10[256] =
 {
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0, 1023,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0, 1023,
   0,  1,   0,   2,  0,  0,  0,    4,    0,   0,  0, 512,  0,   16, 1023, 1023,
   0,  0,  32,  64,  8,  8,  0,  128, 1023, 256,  0,   0,  0,    0,    0,    0,
   0,  1,   0,   2,  0,  0,  0,    4,    0,   0,  0, 512,  0,   16, 1023, 1023,
   0,  0,  32,  64,  8,  8,  0,    0, 1023, 256,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0,
   0,  0,   0,   0,  0,  0,  0,    0,    0,   0,  0,   0,  0,    0,    0,    0
 };


#endif /* RAXML_CONSTANTS_HPP_ */
