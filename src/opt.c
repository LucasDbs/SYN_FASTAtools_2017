/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Ptr functions
*/

#include <string.h>
#include <stdlib.h>
#include "fasta.h"

ptr_s init_struct(char *c, int (*ptr)(lnkd_lst *, char *))
{
	ptr_s new;

	new.opt = c;
	new.ptr = ptr;
	return (new);
}

ptr_s *init_ptr(void)
{
	ptr_s *new = malloc(sizeof(ptr_s) * 3);

	new[0] = init_struct("1", &opt_one);
	new[1] = init_struct("2", &opt_two);
	new[2] = init_struct("3", &opt_three);
	return (new);
}
//	new[3] = init_struct("4", &opt_four);
//	new[4] = init_struct("5", &opt_five);
//	new[5] = init_struct("6", &opt_six);
//	new[6] = init_struct("7", &opt_seven);
//	new[7] = init_struct("-h", &opt_h);

int fnd_opt(lnkd_lst *list, char **av)
{
	ptr_s *check = init_ptr();
	int a = 0;

	while (a != 3) {
		if (strcmp(av[1], check[a].opt) == 0)
			return (check[a].ptr(list, av[2]));
		a++;
	}
	free(check);
	return (0);
}

int check_opt(char **av)
{
	char *file = get_file();
	char **tab = str_to_word_tab(file, '>');
	lnkd_lst *list = create_list(tab);

	if (list == NULL)
		return (1);
	else {
		rework_list(list);
		fnd_opt(list, av);
	}
	free(file);
	free_tab(tab);
	return (0);
}
