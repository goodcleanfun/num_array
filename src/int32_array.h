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

#define VECTOR_NAME int32_vector
#define VECTOR_TYPE int32_t
#define VECTOR_TYPE_ABS abs
#define VECTOR_TYPE_UNSIGNED uint32_t
#include "vector/numeric.h"
#undef VECTOR_NAME
#undef VECTOR_TYPE
#undef VECTOR_TYPE_ABS
#undef VECTOR_TYPE_UNSIGNED

#endif
