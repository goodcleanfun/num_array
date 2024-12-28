#ifndef NUM_ARRAY_INT64_ALIGNED_H
#define NUM_ARRAY_INT64_ALIGNED_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#define ARRAY_NAME int64_array_aligned
#define ARRAY_TYPE int64_t
#include "aligned/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/int64.h"

#endif
