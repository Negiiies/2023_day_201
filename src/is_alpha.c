/*
 * E89 Pedagogical & Technical Lab
 * project:     alpha
 * created on:  2023-01-30 - 11:58 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

#include "stu.h"

int is_alpha(char c)
{
    if ((c >= 'a' && c<='z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}
