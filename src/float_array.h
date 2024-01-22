#ifndef NUM_ARRAY_FLOAT_H
#define NUM_ARRAY_FLOAT_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME float_array
#define ARRAY_TYPE float
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#define VECTOR_NAME float_vector
#define VECTOR_TYPE float
#define VECTOR_TYPE_ABS fabs
#include "vector/numeric.h"
#undef VECTOR_NAME
#undef VECTOR_TYPE
#undef VECTOR_TYPE_ABS

#endif
