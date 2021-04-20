#ifndef SEARCHING
#define SEARCHING

#include <stdio.h>

/*Linear Search*/
int linear_search(int *array, size_t size, int value);

/*Binary search*/
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int size);

#endif /* SEARCHING */