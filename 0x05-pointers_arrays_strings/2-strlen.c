#include "main.h"

/**
 *   * _strlen - Returns the length of a string
 *     *
 *       * Return: String length
 *       
 */
int _strlen(char *s)
{
		int len = 0;

			for (; *s != '\0'; s++)
					{
								len++;
									}

				return (len);
}
