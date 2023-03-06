#include <stdio.h>

/**
 * swap_int -Swaps the values of two intergers.
 * @a: The first integer to be Swapped.
 * @b: The second integer to be Swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
