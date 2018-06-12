/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Fasta.h
*/

#include <string.h>

int str_compare(void const *a, void const *b)
{
	char const *const *pa = a;
	char const *const *pb = b;

	return (strcmp(*pa, *pb));
}
