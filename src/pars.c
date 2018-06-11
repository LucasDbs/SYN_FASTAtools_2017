/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Parsing functions
*/

#include <string.h>
#include <stdio.h>

int special_param(char **av)
{
	if (av[1][0] != '4' && av[2] != NULL)
		return (1);
	if ((av[1][0] <= '7' && av[1][0] >= '1') && av[1][1] == '\0') {
		if (av[1][0] == '4' && av[2] == NULL)
			return (1);
		else
			return (0);
	} else
		return (1);
}

int pars_command(int ac, char **av)
{
	if (ac > 3)
		return (1);
	else if (strcmp("-h", av[1]) == 0 && av[2] == NULL)
		return (0);
	else
		return (special_param(av));
}
