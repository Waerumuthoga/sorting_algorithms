#include "sort.h"

/**
 * swap_int - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: the second integer to swap.
 */
void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 *  selection_sort - Sort an array of integers in ascending order
 *   using the selection sort algorithm.
 *   @array: An array of integers.
 *   @size: The size of the array.
 *
 *   Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t b, c;

	if (array == NULL || size < 2)
		return;

	for (b = 0; b < size - 1; b++)
	{
		min = array + b;
		for (c = b + 1; c < size; c++)
			min = (array[c] < *min) ? (array + c) : min;

		if ((array + b) != min)
		{
			swap_int(array + b, min);
			print_array(array, size);
		}
	}
}
