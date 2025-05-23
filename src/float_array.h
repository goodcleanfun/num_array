#ifndef NUM_ARRAY_FLOAT_H
#define NUM_ARRAY_FLOAT_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ARRAY_NAME float_array
#define ARRAY_TYPE float
#include "aligned_array/aligned_array.h"
#include "array/sort.h"
#undef ARRAY_NAME
#undef ARRAY_TYPE

#include "vectorized/float32.h"

static inline void float_array_log(float_array *self) {
    float_vector_log(self->a, self->n);
}

static inline void float_array_exp(float_array *self) {
    float_vector_exp(self->a, self->n);
}

#endif
