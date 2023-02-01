/*
 * E89 Pedagogical & Technical Lab
 * project:     sawp
 * created on:  2023-01-30 - 10:59 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

int swap_int(int *a,int *b)
{
    int i;
    i = *a;
    *a = *b;
    *b = i;
    return (i);
}
