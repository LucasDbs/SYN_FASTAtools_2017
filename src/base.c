/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Basics functions
*/

#include <stdio.h>

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