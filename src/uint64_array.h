#ifndef NUM_ARRAY_UINT64_H
#define NUM_ARRAY_UINT64_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME uint64_array
#define ARRAY_TYPE uint64_t
#include "array/array.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vector_ops/uint64.h"

#endif
