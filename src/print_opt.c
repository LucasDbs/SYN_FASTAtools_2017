/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Option one
*/

#include <stdlib.h>
#include <stdio.h>
#include "fasta.h"

int opt_one(lnkd_lst *list, char *s)
{
	lnkd_lst *tmp = list;
	(void)s;

	while (tmp != NULL) {
		if (tmp->name != NULL)
			printf(">%s\n", tmp->name);
		if (tmp->seq != NULL)
			printf("%s\n", tmp->seq);
		tmp = tmp->next;
	}
	return (0);
}

int opt_two(lnkd_lst *list, char *s)
{
	lnkd_lst *tmp = list;
	(void)s;

	while (tmp != NULL) {
		if (tmp->name != NULL)
			printf(">%s\n", tmp->name);
		rna_change(tmp->seq);
		if (tmp->seq != NULL)
			printf("%s\n", tmp->seq);
		tmp = tmp->next;
	}
	return (0);
}

int opt_three(lnkd_lst *list, char *s)
{
	lnkd_lst *tmp = list;
	(void)s;

	while (tmp != NULL) {
		if (tmp->name != NULL)
			printf(">%s\n", tmp->name);
		tmp->seq = rev_seq(tmp->seq);
		if (tmp->seq != NULL)
			printf("%s\n", tmp->seq);
		tmp = tmp->next;
	}
	return (0);
}
/*
int opt_four(lnkd_lst *list, char *s)
{
	lnkd_lst *tmp = list;
	int size = atoi(s);
	char **tab = NULL;

	printf("size = %d\n", size);
	while (tmp != NULL) {
		if (tmp->name != NULL)
			printf(">%s\n", tmp->name);
		tab = tab_four(tmp->seq, size);
		tmp = tmp->next;
	}
	return (0);
}*/