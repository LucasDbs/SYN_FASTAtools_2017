/*
** EPITECH PROJECT, 2018
** Duboisse Lucas
** File description:
** Fasta.h
*/

#ifndef FASTA_H_
#define FASTA_H_

typedef struct lnkd_lst
{
	char *name;
	char *seq;
	struct lnkd_lst *next;
} lnkd_lst;

typedef struct ptr_s
{
	char *opt;
	int (*ptr)(lnkd_lst *);
} ptr_s;

char *get_file(void);
char **str_to_word_tab(char *, char);
int free_tab(char **);
lnkd_lst *create_list(char **);
int size_tab(char **);
int pars_command(int, char **);
int check_opt(char **);
int opt_one(lnkd_lst *);
int opt_two(lnkd_lst *);
int rework_list(lnkd_lst *);
int rna_change(char *);

#endif