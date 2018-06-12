/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Basics functions
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fasta.h"

int check_letter(char *act, char *res, char *c)
{
	int i = 0;

	while (act[i] != '\0') {
		if (*c == act[i]) {
			*c = res[i];
			return (0);
		}
		i++;
	}
	return (0);
}

char *rev_seq(char *str)
{
	int i = 0;
	char *act = "TGACN";
	char *res = "ACTGN";

	if (str == NULL)
		return (NULL);
	str = revstr(str);
	while (str[i]) {
		check_letter(act, res, &str[i]);
		i++;
	}
	return (str);
}

int rna_change(char *str)
{
	int i = 0;

	if (str == NULL)
		return (84);
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

int check_tab(char *str, char **tmp)
{
	int i = 0;

	while (tmp[i] != NULL) {
		if (strcmp(tmp[i], str) == 0)
			return (1);
		i++;
	}
	return (0);
}
