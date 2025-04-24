#ifndef NUM_ARRAY_UINT32_ALIGNED_H
#define NUM_ARRAY_UINT32_ALIGNED_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME uint32_array_aligned
#define ARRAY_TYPE uint32_t
#include "aligned_array/aligned_array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vectorized/uint32.h"

#endif
