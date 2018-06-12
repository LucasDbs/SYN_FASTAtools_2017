/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Linked list
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fasta.h"

char *add_seq(char **tab)
{
	char *new = malloc(sizeof(char) * (size_tab(tab) + 1));
	int i = 1;
	int j = 0;
	int a = 0;

	while (tab[i] != NULL) {
		while (tab[i][j] != '\0')
			new[a++] = tab[i][j++];
		j = 0;
		i++;
	}
	new[a] = '\0';
	return (new);
}

lnkd_lst *init_list(char *str)
{
	lnkd_lst *new = malloc(sizeof(lnkd_lst));
	char **tmp = str_to_word_tab(str, '\n');

	new->name = strdup(tmp[0]);
	new->seq = add_seq(tmp);
	new->next = NULL;
	free_tab(tmp);
	return (new);
}

int add_list(lnkd_lst *list, char *str)
{
	lnkd_lst *new = malloc(sizeof(lnkd_lst));
	lnkd_lst *tmp = list;
	char **tab = str_to_word_tab(str, '\n');

	while (tmp->next != NULL)
		tmp = tmp->next;
	new->name = strdup(tab[0]);
	new->seq = add_seq(tab);
	new->next = NULL;
	tmp->next = new;
	free_tab(tab);
	return (0);
}

lnkd_lst *create_list(char **tab)
{
	lnkd_lst *list = NULL;
	int i = 1;

	if (tab == NULL)
		return (NULL);
	list = init_list(tab[0]);
	while (tab[i] != NULL) {
		add_list(list, tab[i]);
		i++;
	}
	return (list);
}
