#ifndef NUM_ARRAY_INT64_H
#define NUM_ARRAY_INT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "vector/vector.h"

VECTOR_INIT_NUMERIC(int64_array, int64_t, uint64_t, llabs)

#endif
