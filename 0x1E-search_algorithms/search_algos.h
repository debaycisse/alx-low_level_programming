#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 0-linear.c */
int linear_search(int *array, size_t size, int value);

/* 1-binary.c */
int binary_search(int *array, size_t size, int value);

/* 100-jump.c */
int jump_search(int *array, size_t size, int value);

/* 102-interpolation.c */
int interpolation_search(int *array, size_t size, int value);

/* 103-exponential.c */
int exponential_search(int *array, size_t size, int value);
size_t get_jump(int *array, size_t size, int value);
size_t get_prev_jump(int *array, size_t size, int value);

#endif
