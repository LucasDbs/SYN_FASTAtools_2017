/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Rework functions
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "fasta.h"

int upper(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (0);
}

char *rework_seq(char *str)
{
	char *new = malloc(sizeof(char) * (strlen(str) + 1));
	int i = 0;
	int a = 0;

	while (str[i] != '\0') {
		if (str[i] == 't' || str[i] == 'T' 
			|| str[i] == 'a' || str[i] == 'A'
			|| str[i] == 'g' || str[i] == 'G'
			|| str[i] == 'c' || str[i] == 'C'
			|| str[i] == 'n' || str[i] == 'N')
			new[a++] = str[i];
		i++;
	}
	new[a] = '\0';
	free(str);
	upper(new);
	return (new);
}

int rework_list(lnkd_lst *list)
{
	lnkd_lst *tmp = list;

	while (tmp != NULL) {
		tmp->seq = rework_seq(tmp->seq);
		tmp = tmp->next;
	}
	return (0);
}