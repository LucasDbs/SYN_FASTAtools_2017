/*
** EPITECH PROJECT, 2018
** Lucas Duboisse
** File description:
** str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>
#include "fasta.h"

int free_tab(char **tab)
{
	for (int i = 0; tab[i] != NULL; i++)
		free(tab[i]);
	free(tab);
	return (0);
}

int free_list(lnkd_lst *list)
{
	lnkd_lst *tmp = list;
	lnkd_lst *save = NULL;

	while (tmp != NULL) {
		free(tmp->name);
		free(tmp->seq);
		save = tmp->next;
		free(tmp);
		tmp = save;
	}
	return (0);
}