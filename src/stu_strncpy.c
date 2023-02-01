/*
 * E89 Pedagogical & Technical Lab
 * project:     strncpy
 * created on:  2023-01-30 - 10:28 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

#include "stu.h"

char *stu_strncpy(char *dest,
                  const char *src,
                  unsigned int n)
{
    unsigned int i;

    i= 0;
    if(!dest) {
        return 0;
    }
    while (i < n) {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return(dest);
}
