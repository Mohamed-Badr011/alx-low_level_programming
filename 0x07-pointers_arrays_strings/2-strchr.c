#include <stdio.h>

/**
 * _strchr - function search in string
 *			about specific character
 *
 * @s: the string will search in it
 * @c: the character will search about it
 *
 * Return: pointer to the first occurrence of the character 'c'
 *			in the string 's',or "NULL" if the character is not found.
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((s + i));
		i++;
	}
	/**
	 * in case of "c = '\0'" so we return last address in string not "NULL"
	*/
	if (c == *(s + i))
		return (s + i);

	return (NULL);
}
