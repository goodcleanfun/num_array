#ifndef NUM_ARRAY_INT32_H
#define NUM_ARRAY_INT32_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "vector/vector.h"
#include "vector/numeric.h"

VECTOR_INIT(int32_array, int32_t)
VECTOR_NUMERIC(int32_array, int32_t, uint32_t, abs)

#endif
