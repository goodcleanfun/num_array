#ifndef NUM_ARRAY_INT32_ALIGNED_H
#define NUM_ARRAY_INT32_ALIGNED_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME int32_array
#define ARRAY_TYPE int32_t
#include "aligned_array/aligned_array.h"
#include "array/sort.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vectorized/int32.h"

#endif
