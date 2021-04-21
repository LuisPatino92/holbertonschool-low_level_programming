#ifndef SEARCHING
#define SEARCHING

#include <stdio.h>
#include <math.h>

/*Linear Search*/
int linear_search(int *array, size_t size, int value);

/*Binary search*/
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int size);

/*Jump Search*/
int jump_search(int *array, size_t size, int value);
int check_coincidence_at_0(int val_array, int step, int value);

#endif /* SEARCHING */