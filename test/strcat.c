#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */
char *_strcat(char *dest, const char *src)
{
	char *len;
	const char *len1;

	len = dest;
	len1 =  src;

	while (*len != '\0')
		len++;

	while (*len1 != '\0')
		*len++ = *len1++;
	*len = '\0';
	return (dest);
}

