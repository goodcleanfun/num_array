#ifndef NUM_ARRAY_INT64_H
#define NUM_ARRAY_INT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "int64_array.h"
#include "vector/numeric.h"

VECTOR_NUMERIC(int64_array, int64_t, uint64_t, llabs)

#endif
