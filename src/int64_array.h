#ifndef NUM_ARRAY_INT64_H
#define NUM_ARRAY_INT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "vector/vector.h"
#include "vector/numeric.h"

VECTOR_INIT(int64_array, int64_t)
VECTOR_NUMERIC(int64_array, int64_t, uint64_t, llabs)

#endif
