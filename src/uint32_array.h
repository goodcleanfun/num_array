#ifndef NUM_ARRAY_UINT32_H
#define NUM_ARRAY_UINT32_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "nop.h"
#include "vector/vector.h"

VECTOR_INIT_NUMERIC(uint32_array, uint32_t, uint32_t, nop)

#endif
