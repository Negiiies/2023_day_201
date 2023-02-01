/*
 * E89 Pedagogical & Technical Lab
 * project:     strndup
 * created on:  2023-01-30 - 14:20 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

#include "stu.h"
#include <stdlib.h>
char *stu_strndup(const char *src, unsigned int n)
{
    unsigned int i;
    int len;
    char *buffer;

    i = 0;
    len = stu_strlen(src);
    buffer = malloc(sizeof(char) *len);
    while ((src[i] != '\0') && (i < n)) {
        buffer[i] = src[i];
        i += 1;
    }
    if (src[i] == '\0') {
        return(buffer);
    }
    return (buffer);
}
