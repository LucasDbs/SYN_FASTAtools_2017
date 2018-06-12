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

int save_it(char **tmp, char *str)
{
	int i = 0;

	while (tmp[i] != NULL)
		i++;
	tmp[i++] = strdup(str);
	tmp[i] = NULL;
	return (0);
}

int opt_four_print(char **tab, char ***tmp)
{
	int i = 0;

	while (tab[i] != NULL) {
		if (check_tab(tab[i], *tmp) == 0) {
			printf("%s\n", tab[i]);
			save_it((*tmp), tab[i]);
		}
		i++;
	}
	return (0);
}