#include "search_algos.h"

/**
* linear_search - function to perform a linear search
* @array: pointer to the first element of array
* @size: size of the array
* @value: the value to be searched
* Return: -1 on failure, the index on success
*/
int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (array == NULL)
		return (-1);
	for (; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
