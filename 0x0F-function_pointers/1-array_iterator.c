#include "function_pointers.h"
/**
 *array_iterator -  executes a function given as a parameter
 *@array: input parameter
 *@size: input parameter
 *@action: input parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
