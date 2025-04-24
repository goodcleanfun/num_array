#ifndef NUM_ARRAY_DOUBLE_H
#define NUM_ARRAY_DOUBLE_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME double_array
#define ARRAY_TYPE double
#include "aligned_array/aligned_array.h"
#include "array/sort.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vectorized/float64.h"

#endif
