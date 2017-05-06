#ifndef ASTC_DATA_SIZE_TABLE_H_
#define ASTC_DATA_SIZE_TABLE_H_

#include <cstdint>

const int8_t color_endpoint_range_table[2][12][16] = {
    {{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
     {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},
     {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},
     {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},
     {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},
     {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 19, 19, 19, 19},
     {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 17, 17, 17, 17},
     {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 16, 16, 16, 16},
     {20, 20, 20, 20, 20, 20, 20, 20, 19, 19, 19, 19, 13, 13, 13, 13},
     {20, 20, 20, 20, 20, 20, 20, 20, 16, 16, 16, 16, 11, 11, 11, 11},
     {20, 20, 20, 20, 20, 20, 20, 20, 14, 14, 14, 14, 10, 10, 10, 10},
     {20, 20, 20, 20, 19, 19, 19, 19, 11, 11, 11, 11, 7, 7, 7, 7}},
    {{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
     {20, 20, 20, 20, 20, 20, 20, 20, 14, 14, 14, 14, 9, 9, 9, 9},
     {20, 20, 20, 20, 20, 20, 20, 20, 12, 12, 12, 12, 8, 8, 8, 8},
     {20, 20, 20, 20, 19, 19, 19, 19, 11, 11, 11, 11, 7, 7, 7, 7},
     {20, 20, 20, 20, 17, 17, 17, 17, 10, 10, 10, 10, 6, 6, 6, 6},
     {20, 20, 20, 20, 15, 15, 15, 15, 8, 8, 8, 8, 5, 5, 5, 5},
     {20, 20, 20, 20, 13, 13, 13, 13, 7, 7, 7, 7, 4, 4, 4, 4},
     {20, 20, 20, 20, 11, 11, 11, 11, 6, 6, 6, 6, 3, 3, 3, 3},
     {20, 20, 20, 20, 9, 9, 9, 9, 4, 4, 4, 4, 2, 2, 2, 2},
     {17, 17, 17, 17, 7, 7, 7, 7, 3, 3, 3, 3, 1, 1, 1, 1},
     {14, 14, 14, 14, 5, 5, 5, 5, 2, 2, 2, 2, 0, 0, 0, 0},
     {10, 10, 10, 10, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0}},
};

#endif  // ASTC_DATA_SIZE_TABLE_H_