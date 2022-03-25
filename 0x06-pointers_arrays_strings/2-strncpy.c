#include "main.h"
/**
 * _strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 * _strncpy - a function that copies a string.
 * at most n bytes of src are copied.
 * if length of src is < n, additional null bytes are written to dest
 * to ensure that a total of n bytes are written.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be concatenated.
 * @n: number of bytes to be used.
 *
 * Return: pointer to destination string.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
char *_strncpy(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */
int byteCount;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
	dest[byteCount] = src[byteCount];
for (; byteCount < n; byteCount++)
	dest[byteCount] = '\0';

return (dest);
}
