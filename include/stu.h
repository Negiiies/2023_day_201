/*
 * E89 Pedagogical & Technical Lab
 * project:     stu
 * created on:  2023-01-30 - 09:32 +0100
 * 1st author:  dylan.le - dylan.le
 * description: include
 */

#ifndef STU_H_

#define STU_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int nb_len(int nb);

int get_digit(int nb, int index);

int stu_puts(const char *str);

int print_base10(int nb);

int atoi(const char *str);

int stu_strlen(const char *str);

int stu_strcmp(const char *sa, const char *sb);

char *stu_strcpy(char *dest, const char *src);

char *stu_strncpy(char *dest, const char *src, unsigned int);

char *stu_strdup(const char *src);

char *stu_strndup(const char *src, unsigned int n);

char *stu_strcat(char *dest, const char *src);

char *stu_strchr(const char *str, char c);

int is_alpha(char c);

int is_num(char c);

void swap_int(int *a, int *b);
#endif /*STU_H_*/
