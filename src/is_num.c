/*
 * E89 Pedagogical & Technical Lab
 * project:     num
 * created on:  2023-01-30 - 13:33 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

int is_num(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}
