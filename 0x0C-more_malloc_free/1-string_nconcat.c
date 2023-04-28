#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];
        while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}

#include <stdlib.h>
#include "main.h"

/**
 * __strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int __strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: the string to copy to
 * @src: the string to copy from
 * @i: the index to start from
 * Return: dest the string the has src content
 */

void _strcpy(char *dest, char *src, unsigned int i)
{
	int j;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to get from s2
 * Return: the string containing s1 concatenated with s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int len;
	unsigned int i;

	i = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len = __strlen(s1);
	string = malloc(sizeof(char) * (len + n) + 1);
	if (!string)
		return (NULL);
	_strcpy(string, s1, 0);
	while (i < n)
	{
		string[len] = s2[i];
		len++;
		i++;
	}
	string[len] = '\0';
	return (string);
}
