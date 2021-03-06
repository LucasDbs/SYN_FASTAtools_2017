/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** requirement
*/

#include <stdio.h>

int is_word(char *str, int i)
{
	if ((str[i] >= 'a' && str[i] <= 'z')
		&& ((str[i - 1] >= 32 && str[i - 1] <= 47)
		|| (str[i - 1] >= 58 && str[i - 1] <= 64)
		|| (str[i - 1] >= 91 && str[i - 1] <= 96) 
		|| (str[i - 1] >= 123 && str[i - 1] <= 127) || i == 0))
		return (0);
	else
		return (1);
}

char *my_strcapitalize_synthesis(char *str)
{
	int i = 0;
	int check = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0') {
		if ((check = is_word(str, i)) == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
