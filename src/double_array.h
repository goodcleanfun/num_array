#ifndef NUM_ARRAY_DOUBLE_H
#define NUM_ARRAY_DOUBLE_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME double_array
#define ARRAY_TYPE double
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#define VECTOR_NAME double_vector
#define VECTOR_TYPE double
#define VECTOR_TYPE_ABS fabs
#include "vector/numeric.h"
#undef VECTOR_NAME
#undef VECTOR_TYPE
#undef VECTOR_TYPE_ABS

#endif
