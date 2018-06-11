/*
** EPITECH PROJECT, 2018
** Lucas Duboisse
** File description:
** str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>

int free_tab(char **tab)
{
	for (int i = 0; tab[i] != NULL; i++)
		free(tab[i]);
	free(tab);
	return (0);
}
