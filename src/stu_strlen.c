/*
 * E89 Pedagogical & Technical Lab
 * project:     strlen
 * created on:  2022-12-19 - 16:45 +0100
 * 1st author:  dylan.le - dylan.le
 * description: printf
 */

unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != ('\0')) {
        i += 1;
    }
        return (i);
}
