#include <stdio.h>

/**
 * _memcpy - function copies 'n' bytes
 *		from memory area "src" to memory area "dest"
 *
 * @dest: the address of memory that copy to it
 * @src: the address of memory taht copy from it
 * @n: the size of the memory to copy
 *
 * Return: pointer to the memory area "dest".
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
