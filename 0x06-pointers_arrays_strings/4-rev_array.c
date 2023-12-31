#include "main.h"
#include <stdio.h>
/**
 *reverse_array - a function that reverses the content
 *of an array of integers
 *@n: is the number of elements of the array
 *@a: array of integers to be reversed
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
