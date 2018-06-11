/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Basics functions
*/

#include <stdio.h>

int rna_change(char *str)
{
	int i = 0;

	while (str[i]) {
		if (str[i] == 't' || str[i] == 'T')
			str[i] = 'U';
		i++;
	}
	return (0);
}

int size_tab(char **tab)
{
	int i = 1;
	int j = 0;
	int nb = 0;

	while (tab[i] != NULL) {
		while (tab[i][j] != '\0') {
			j++;
			nb++;
		}
		j = 0;
		i++;
	}
	return (nb);
}