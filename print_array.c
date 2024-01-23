#include "sort.h"

/**
 * print_array - Print the elements of an array.
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	if (array == NULL || size == 0)
		return;

	printf("%d", array[0]);

	for (i = 1; i < size; i++)
	{
		printf(", %d", array[i]);
	}

	printf("\n");
}
