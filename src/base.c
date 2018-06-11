/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Basics functions
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

char *rev_seq(char *str)
{
	str = revstr(str);
	int i = 0;

	while (str[i]) {
		if (str[i] == 'T')
			str[i++] = 'A';
		else if (str[i] == 'G')
			str[i++] = 'C';
		i = i;
		if (str[i] == 'A')
			str[i++] = 'T';
		else if (str[i] == 'C')
			str[i++] = 'G';
	}
	return (str);
}

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
