#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @a: string
 * @accept: string to match
 * Return: Pointer to the byte in `a` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *a, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
		if (accept[j] == a[i])
			{
			p = &a[i];
			return (p);
			}
		j++;
		}
	i++;
	}
return (0);
}
