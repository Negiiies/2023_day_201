/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-01-30 - 14:25 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

char *stu_strcat(char *dest, const char *src)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0') {
        i += 1 ;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        j += 1;
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}
