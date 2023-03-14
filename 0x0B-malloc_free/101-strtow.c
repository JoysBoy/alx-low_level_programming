#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *count_words - Counts the number of words in a string.
 *@str: The input string.
 *
 *Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 *word_len - Computes the length of a word.
 *@str: The input string.
 *
 *Return: The length of the word.
 */
int word_len(char *str)
{
	int len = 0;

	while (*str != ' ' && *str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 *strtow - Splits a string into words.
 *@str: The input string.
 *
 *Return: If str is NULL, str is "", or memory allocation fails - NULL.
 *Otherwise - a pointer to an array of strings (words).
 *Each element of this array contains a single word, null-terminated.
 *The last element of the returned array is NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = count_words(str);

	words = malloc(sizeof(char *) * (wc + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < wc; i++)
	{
		while (str[k] == ' ')
			k++;

		len = word_len(&str[k]);

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);

			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++, k++)
			words[i][j] = str[k];

		words[i][j] = '\0';
	}

	words[i] = NULL;

	return (words);
}

/**
 *main - Entry point.
 *@argc: The number of command-line arguments.
 *@argv: An array containing the command-line arguments.
 *
 *Return: 0 upon success, non-zero otherwise.
 */
int main(int argc, char *argv[])
{
	char **words;
	int i;

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}

	words = strtow(argv[1]);

	if (words == NULL)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; words[i] != NULL; i++)
	{
		printf("%s\n", words[i]);
		free(words[i]);
	}

	free(words);

	return (0);
}
