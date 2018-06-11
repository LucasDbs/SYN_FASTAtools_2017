/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Option one
*/

#include <stdio.h>
#include "fasta.h"

int opt_one(lnkd_lst *list)
{
	lnkd_lst *tmp = list;

	while (tmp != NULL) {
		printf(">%s\n", tmp->name);
		printf("%s\n", tmp->seq);
		tmp = tmp->next;
	}
	return (0);
}

int opt_two(lnkd_lst *list)
{
	lnkd_lst *tmp = list;

	while (tmp != NULL) {
		printf(">%s\n", tmp->name);
		rna_change(tmp->seq);
		printf("%s\n", tmp->seq);
		tmp = tmp->next;
	}
	return (0);
}

int opt_three(lnkd_lst *list)
{
	lnkd_lst *tmp = list;

	while (tmp != NULL) {
		printf(">%s\n", tmp->name);
		tmp->seq = rev_seq(tmp->seq);
		printf("%s\n", tmp->seq);
		tmp = tmp->next;
	}
	return (0);
}
