#ifndef NUM_ARRAY_UINT64_H
#define NUM_ARRAY_UINT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "nop.h"
#include "vector/vector.h"
#include "vector/numeric.h"

VECTOR_INIT(uint64_array, uint64_t)
VECTOR_NUMERIC(uint64_array, uint64_t, uint64_t, nop)

#endif
