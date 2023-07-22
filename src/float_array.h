#ifndef NUM_ARRAY_FLOAT_H
#define NUM_ARRAY_FLOAT_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "vector/vector.h"
#include "vector/numeric.h"

VECTOR_INIT(float_array, float)
VECTOR_NUMERIC(float_array, float, float, fabs)

#endif
