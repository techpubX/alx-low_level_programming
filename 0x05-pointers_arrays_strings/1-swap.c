#include "main.h"

/**
 *   *swaps the values of two integers
 *     *
 *       *a initial interger
 *         *b swap integer
 *           * Return: void
 *
 */

void swap_int(int *a, int *b)
{
		int swp;

			swp = *a;
				*a = *b;
					*b = swp;
}
