#ifndef NUM_ARRAY_UINT32_H
#define NUM_ARRAY_UINT32_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "nop.h"

#define ARRAY_NAME uint32_array
#define ARRAY_TYPE uint32_t
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#define VECTOR_NAME uint32_vector
#define VECTOR_TYPE uint32_t
#define VECTOR_TYPE_ABS nop
#include "vector/numeric.h"
#undef VECTOR_NAME
#undef VECTOR_TYPE
#undef VECTOR_TYPE_ABS

#endif
