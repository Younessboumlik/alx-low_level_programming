#include "main.h"
/**
 * strtow - transoform a string to a table of chars. 
 *
 * @str: the string. 
 * Return: an array of strings.
 */

char **strtow(char *str)
{
	int n = 0, i = 0, j = 0, k = 0, lengh = 0;
	char **result;

	if ((str == NULL) || (strcmp(str, "") == 0))
	{
		return (NULL);
	}

	// Count the number of words
	while(str[i] != '\0')
	{
		if ((str[i] != ' ') && ((i == 0) || (str[i - 1] == ' ')))
		{
			n++;
		}
		i++;
	}

	result = (char **)malloc(sizeof(char *) * (n + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] != ' ') && ((i == 0) || (str[i - 1] == ' ')))
		{
			k = i;
			while ((str[i] != ' ') && (str[i] != '\0'))
			{
				i++;
			}
			lengh = i - k;
			result[j] = malloc(sizeof(char) * (lengh + 1));
			if (result[j] == NULL)
			{
				return (NULL);
			}
			strncpy(result[j], str + k, lengh);
			result[j][lengh] = '\0';
			j++;
 		}
 		else
 		{
 			i++;
 		}
	}

	result[n] = NULL;

	return (result);
}
