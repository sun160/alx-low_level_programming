#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes
 *
 * Return: pointer shall point
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int t, j, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (t = 0; s1[t] != '\0'; t++)
	{
		str[t] = s1[t];
	}

	for (j = 0; j < n; j++)
	{
		 str[t] = s2[j];
		 t++;
	}

	str[t] = '\0';
	return (str);
}
