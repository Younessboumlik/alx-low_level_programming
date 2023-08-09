#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count;

	for (i = 0, count = 0; str[i]; i++)
		if ((str[i] != ' ' && str[i + 1] == ' ') ||
			(str[i] != ' ' && str[i + 1] == '\0'))
			count++;

	return (count);
}

/**
 * get_next_word - Gets the next word from a string.
 * @str: The string to get the next word from.
 * @start: The start index of the next word.
 * @end: The end index of the next word.
 *
 * Return: A pointer to the next word, or NULL if there are no more words.
 */
char *get_next_word(char *str, int *start, int *end)
{
	int i, j, len;
	char *word;

	/* Find the start and end indices of the next word */
	i = *end;
	while (str[i] == ' ')
		i++;
	*start = i;
	while (str[i] != ' ' && str[i] != '\0')
		i++;
	*end = i;

	/* Calculate the length of the word and allocate memory for it */
	len = *end - *start;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);

	/* Copy the word into the new string */
	for (j = 0; j < len; j++)
		word[j] = str[*start + j];
	word[len] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if the function fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, count;
	int word_start, word_end;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);

	/* Allocate memory for the array of words */
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	/* Split the string into words */
	word_end = 0;
	for (i = 0; i < count; i++)
	{
		words[i] = get_next_word(str, &word_start, &word_end);
		if (words[i] == NULL)
			return (NULL);
	}

	/* Add the NULL terminator to the array of words */
	words[count] = NULL;

	return (words);
}
