#include "main.h"

/**
 * strtow - transoform a string to a table of chars.
 *
 * *str: the string.
 * Return: an array of strings.
 */

char **strtow(char *str)
{
	int n = 1, i = 0, j = 0, k = 0, lengh = 0;
	char **result;

	if ((str == NULL) || (strcmp(str, "") == 0))
	{
		return (NULL);
	}
	while(str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			n = n + 1;
		}
		i = i + 1;
	}
	result = (char **) (malloc(sizeof(char *) * (n + 1)));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			lengh = i - k;
			result[j] = malloc(sizeof(char) * (lengh + 1));
			if (result[j] == NULL)
			{
				return (NULL);
			}
			strncpy(result[j], str + k, lengh);
			result[j][lengh] = '\0';
			j = j + 1;
			k = i + 1;
 		}
		i = i + 1;
	}
	lengh = i - k;
	result[j] = (char *)malloc(sizeof(char) * (lengh + 1));
	if (result[j] == NULL)
	{
		return (NULL);
	}
	strncpy(result[j], str + k, lengh);
	result[j][lengh] = '\0';
	result[n] = NULL;

	return (result);
}
