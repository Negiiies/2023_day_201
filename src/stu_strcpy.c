/*
 * E89 Pedagogical & Technical Lab
 * project:     strcpy
 * created on:  2023-01-30 - 10:25 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */
#include "stu.h"
char *stu_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    return(dest);
}

