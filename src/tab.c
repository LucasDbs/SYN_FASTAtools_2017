/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Array functions
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int fnd_size(char *str, int k)
{
	int lenght = strlen(str);
	int res = 0;

	if (lenght > k)
		res = lenght - (k - 1);
	else
		res = lenght;
	return (res);
}

/*char **tab_four(char *str, int k)
{
	return (0);
}

//	int i = 0;
//	int size = fnd_size(str, k);
//	char **array = malloc(sizeof(char *) * (size + 1));
*/