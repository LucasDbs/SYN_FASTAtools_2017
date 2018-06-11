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
	char *str = malloc(sizeof(char) * 2);
	char buffer[2];
	int res = 0;

	while ((res = read(0, buffer, 1)) == 1) {
		str[i] = buffer[0];
		str[i + 1] = '\0';
		str = realloc(str, strlen(str) + 2);
		i++;
	}
	return (str);
}