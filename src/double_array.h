#ifndef NUM_ARRAY_DOUBLE_H
#define NUM_ARRAY_DOUBLE_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "vector/vector.h"
#include "vector/numeric.h"

VECTOR_INIT(double_array, double)
VECTOR_NUMERIC(double_array, double, double, fabs)

#endif
