#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
