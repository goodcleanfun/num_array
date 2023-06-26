#ifndef NUM_ARRAY_UINT64_H
#define NUM_ARRAY_UINT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "nop.h"
#include "uint64_array.h"
#include "vector/vector.h"

VECTOR_NUMERIC(uint64_array, uint64_t, uint64_t, nop)

#endif
