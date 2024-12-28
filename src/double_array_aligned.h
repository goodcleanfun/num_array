#ifndef NUM_ARRAY_DOUBLE_ALIGNED_H
#define NUM_ARRAY_DOUBLE_ALIGNED_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME double_array_aligned
#define ARRAY_TYPE double
#include "aligned/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/double.h"

#endif
