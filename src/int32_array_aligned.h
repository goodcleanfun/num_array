#ifndef NUM_ARRAY_INT32_ALIGNED_H
#define NUM_ARRAY_INT32_ALIGNED_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME int32_array_aligned
#define ARRAY_TYPE int32_t
#include "aligned/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/int32.h"

#endif
