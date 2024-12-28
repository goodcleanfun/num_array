#ifndef NUM_ARRAY_UINT32_H
#define NUM_ARRAY_UINT32_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME uint32_array
#define ARRAY_TYPE uint32_t
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/uint32.h"

#endif
