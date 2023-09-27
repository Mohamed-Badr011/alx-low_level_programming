#include <stdio.h>

/**
 * *_strspn - gets the length of a prefix substring
 *
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in 's'
 *
 * Return: the number of bytes in the initial segment
 *		of 's' which consist only of bytes from "accept"
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(accept + i); i++)
	{
		for (j = 0; *(s + j); j++)
		{
			if (*(accept + i) == *(s + j))
				return (((s + j) - s) + 1);
		}
	}
	return (0);
}
