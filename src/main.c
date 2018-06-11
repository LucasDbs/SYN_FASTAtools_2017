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
	if (pars_command(ac, av) == 1)
		return (84);
	else
		check_opt(av);
	return (0);
}
