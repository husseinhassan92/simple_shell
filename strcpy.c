#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int n, len;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (n = 0; n <= len; n++)
		dest[n] = src[n];

	return (dest);
}
