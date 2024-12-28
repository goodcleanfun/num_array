#ifndef NUM_ARRAY_FLOAT_ALIGNED_H
#define NUM_ARRAY_FLOAT_ALIGNED_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME float_array_aligned
#define ARRAY_TYPE float
#include "aligned/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/float.h"

#endif
