#ifndef NUM_ARRAY_UINT64_H
#define NUM_ARRAY_UINT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "nop.h"


#define ARRAY_NAME uint64_array
#define ARRAY_TYPE uint64_t
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#define VECTOR_NAME uint64_vector
#define VECTOR_TYPE uint64_t
#define VECTOR_TYPE_ABS nop
#include "vector/numeric.h"
#undef VECTOR_NAME
#undef VECTOR_TYPE
#undef VECTOR_TYPE_ABS

#endif
