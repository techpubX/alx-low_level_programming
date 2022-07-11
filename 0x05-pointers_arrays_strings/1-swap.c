#include "main.h"

/**
 *   * void swap_int(int *a, int *b) swaps the values of two integers
 *     *
 *       *
 *         * Return: void
 *           */
void swap_int(int *a, int *b)
{
		int swp;

			swp = *a;
				*a = *b;
					*b = swp;
}
