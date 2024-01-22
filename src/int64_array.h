#ifndef NUM_ARRAY_INT64_H
#define NUM_ARRAY_INT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#define ARRAY_NAME int64_array
#define ARRAY_TYPE int64_t
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#define VECTOR_NAME int64_vector
#define VECTOR_TYPE int64_t
#define VECTOR_TYPE_ABS abs
#define VECTOR_TYPE_UNSIGNED uint64_t
#include "vector/numeric.h"
#undef VECTOR_NAME
#undef VECTOR_TYPE
#undef VECTOR_TYPE_ABS
#undef VECTOR_TYPE_UNSIGNED

#endif
