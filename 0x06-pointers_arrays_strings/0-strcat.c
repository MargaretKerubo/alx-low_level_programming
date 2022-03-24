/*
 * File: 0-strcat.c
 * Auth: Marga Kerubo
 */

#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	
	dest[i] = '\0';
	return (dest);
}
