#ifndef NUM_ARRAY_H
#define NUM_ARRAY_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "vector/vector.h"

#define nop(x) (x)

// Vectors

VECTOR_INIT_NUMERIC(int32_array, int32_t, uint32_t, abs)
VECTOR_INIT_NUMERIC(uint32_array, uint32_t, uint32_t, nop)
VECTOR_INIT_NUMERIC(int64_array, int64_t, uint64_t, llabs)
VECTOR_INIT_NUMERIC(uint64_array, uint64_t, uint64_t, nop)

VECTOR_INIT_NUMERIC(float_array, float, float, fabs)
VECTOR_INIT_NUMERIC(double_array, double, double, fabs)

#endif
