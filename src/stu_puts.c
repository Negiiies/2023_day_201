/*
 * E89 Pedagogical & Technical Lab
 * project:     puts
 * created on:  2023-01-30 - 11:03 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

#include "stu.h"

int stu_puts(const char *str)
{
    int i;
    char c;

    c = '\n';
    i = stu_strlen(str);
    i = write(1, str, i);
    write(1, &c, 1);
    if (i < 0){
        return (-1);
    } else {
        return(i + 1);
    }
}
