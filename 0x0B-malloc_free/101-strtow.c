#include "main.h"
/**
 * strtow - transoform a string to a table of chars. 
 *
 * @str: the string. 
 * Return: an array of strings.
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count;
	int word_start, word_end;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0, count = 0; str[i]; i++)
		if ((str[i] != ' ' && str[i + 1] == ' ') ||
			(str[i] != ' ' && str[i + 1] == '\0'))
			count++;

	/* Allocate memory for the array of words */
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	/* Split the string into words */
	for (i = 0, j = 0; i < count; i++)
	{
		/* Find the start and end indices of the next word */
		while (str[j] == ' ')
			j++;
		word_start = j;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		word_end = j;

		/* Calculate the length of the word and allocate memory for it */
		len = word_end - word_start;
		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
			return (NULL);

		/* Copy the word into the array of words */
		for (k = 0; k < len; k++)
			words[i][k] = str[word_start + k];
		words[i][len] = '\0';
	}

	/* Add the NULL terminator to the array of words */
	words[count] = NULL;

	return (words);
}
