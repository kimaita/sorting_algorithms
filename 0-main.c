#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int array_wneg[] = {-46, -55, 92, 31, 150, 176, 137, -76, 105, 18};
	int array_sorted[] = {-25, 41, 48, 71, 73, 94, 125, 143, 165, 181};
	size_t n = sizeof(array) / sizeof(array[0]);
	size_t n_wneg = sizeof(array_wneg) / sizeof(array_wneg[0]);
	size_t n_sorted = sizeof(array_sorted) / sizeof(array_sorted[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);

	printf("\n-----\n");

	print_array(array_wneg, n_wneg);
	printf("\n");
	bubble_sort(array_wneg, n_wneg);
	printf("\n");
	print_array(array_wneg, n_wneg);

	printf("\n-----\n");

	print_array(array_sorted, n_sorted);
	printf("\n");
	bubble_sort(array_sorted, n_sorted);
	printf("\n");
	print_array(array_sorted, n_sorted);
	return (0);
}
