/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Other functions
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fasta.h"

char *revstr(char *str)
{
	int i = strlen(str);
	char *new = malloc(sizeof(char) * (i + 1));
	int a = 0;

	i--;
	while (i >= 0)
		new[a++] = str[i--];
	new[a] = '\0';
	free(str);
	return (new);
}

int opt_four_print(char **tab)
{
	char **tmp = malloc(sizeof(char *) * (size_of_array(tab) + 1));
	int i = 0;
	int a = 0;

	tmp[0] = NULL;
	while (tab[i] != NULL) {
		if (check_tab(tab[i], tmp) == 0) {
			printf("%s\n", tab[i]);
			tmp[a++] = strdup(tab[i]);
			tmp[a] = NULL;
		}
		i++;
	}
	return (0);
}