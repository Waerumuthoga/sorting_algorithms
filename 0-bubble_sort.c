#include "sort.h"

/**
 * int_swap - swaps one integer for another in an array
 * @x: first integer
 * @y: second integer
 */
void int_swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - sorts an array of elements in an ascending order
 * @array: a list of integers to be sorted
 * @size: the size of the array
 *
 * Description : Prints the array after each swap.
 *
 */
void bubble_sort(int *array, size_t size);
{
	size_t, a = len;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (a = 0; a < len - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				int_swap(array + a, array + a + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
