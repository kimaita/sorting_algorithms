#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, n, last_swap;
	int temp;

	n = size;
	while (n)
	{
		last_swap = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i] < array[i - 1])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				last_swap = i;
				print_array(array, size);
			}
		}
		n = last_swap;
	}
}