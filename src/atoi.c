/*
 * E89 Pedagogical & Technical Lab
 * project:     atoi
 * created on:  2023-01-30 - 14:10 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

#include "stu.h"

int atoi(const char *str)
{
    int i;
    int j;
    int negatif;

    j = 0;
    i = 0;
    negatif = 1;
    if (str[i] == '-') {
        negatif = -1;
        i += 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        j = j + (str[i] - '0');
        j *= 10;
        i += 1;
    }
    i += 1;
    j = j / 10;
    return(j * negatif);
}
