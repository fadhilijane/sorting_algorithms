#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/* sorting algorithms */
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
/*void insertion_sort_list(listint_t **list);*/
void selection_sort(int *array, size_t size);

#endif
