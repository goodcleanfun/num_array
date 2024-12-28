#ifndef NUM_ARRAY_INT32_H
#define NUM_ARRAY_INT32_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME int32_array
#define ARRAY_TYPE int32_t
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/int32.h"

#endif
