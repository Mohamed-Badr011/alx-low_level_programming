#include <stdio.h>

/**
 * _memset - fills the specific area of memory
 *	by specific value
 *
 * @s: the address of memory to fills
 * @b: the value with which the memory will be filled
 * @n: the size of the memory to fills
 *
 * Return: pointer to the memory area 's'.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i++) = b;
	}

	return (s);
}
