/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Array functions
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "fasta.h"

int size_of_array(char **array)
{
	int i = 0;

	while (array[i] != NULL)
		i++;
	return (i);
}

int fnd_size(char *str, int k)
{
	int lenght = strlen(str);
	int res = 0;

	if (lenght > k)
		res = lenght - (k - 1);
	else
		res = lenght;
	return (res);
}

int is_valid(char *str, int i, int k)
{
	int nb = 0;

	while (str[i]) {
		i++;
		nb++;
	}
	if (nb >= k)
		return (0);
	else
		return (1);
}

char *add_tab(char *str, int i, int k)
{
	int nb = 0;
	char *res = malloc(sizeof(char) * (k + 1));
	int a = 0;

	while (nb != k) {
		res[a++] = str[i++];
		nb++;
	}
	res[a] = '\0';
	return (res);
}

char **tab_four(char *str, int k)
{
	int size = fnd_size(str, k);
	char **array = malloc(sizeof(char *) * (size + 1));
	int i = 0;
	int a = 0;
	int size_tab = 0;

	while (str[i]) {
		if (is_valid(str, i, k) == 0)
			array[a++] = add_tab(str, i, k);
		i++;
	}
	array[a] = NULL;
	size_tab = size_of_array(array);
	qsort(array, size_tab, sizeof(*array), str_compare);
	return (array);
}
