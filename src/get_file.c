/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Fasta.h
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *get_file(void)
{
	int i = 0;
	char *str = NULL;
	char buffer[2];
	int res = 0;

	if (isatty(0) == 1)
		exit(0);
	else if ((str = malloc(sizeof(char) * 2)) == NULL)
		return (NULL);
	while ((res = read(0, buffer, 1)) > 0) {
		str[i] = buffer[0];
		str[i + 1] = '\0';
		str = realloc(str, strlen(str) + 2);
		i++;
	}
	return (str);
}