#ifndef NUM_ARRAY_UINT32_ALIGNED_H
#define NUM_ARRAY_UINT32_ALIGNED_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "nop.h"

#define ARRAY_NAME uint32_array_aligned
#define ARRAY_TYPE uint32_t
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/uint32.h"

#endif
