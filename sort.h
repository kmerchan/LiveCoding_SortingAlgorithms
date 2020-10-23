#ifndef SORT_H
#define SORT_H

/* INCLUDED LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* STRUCTS AND DEFINITIONS */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* FUNCTION PROTOTYPES */
/* provided function to print arrays */
void print_array(const int *array, size_t size);
/* provided function to print doubly linked list */
void print_list(const listint_t *list);
/* quick sort function */
void quick_sort(int *array, size_t size);

#endif
