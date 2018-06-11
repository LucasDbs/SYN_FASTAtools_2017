/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Main function
*/

#include <stdio.h>
#include <stdlib.h>
#include "fasta.h"

int main(int ac, char **av)
{
//	char *file = get_file();
//	char **tab = str_to_word_tab(file, '>');
//	lnkd_lst *list = create_list(tab);

	if (pars_command(ac, av) == 1)
		return (84);
	else
		printf("win\n");
//	for (int i = 0; tab[i] != NULL; i++)
//	{
//		printf("tab[%d] = %s\n", i, tab[i]);
//	}
//	list_print(list);
//	free(file);
	return (0);
}
