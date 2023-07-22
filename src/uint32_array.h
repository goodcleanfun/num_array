#ifndef NUM_ARRAY_UINT32_H
#define NUM_ARRAY_UINT32_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "nop.h"
#include "vector/vector.h"
#include "vector/numeric.h"

VECTOR_INIT(uint32_array, uint32_t)
VECTOR_NUMERIC(uint32_array, uint32_t, uint32_t, nop)

#endif
