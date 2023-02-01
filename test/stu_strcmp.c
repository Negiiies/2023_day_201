/*
 * E89 Pedagogical & Technical Lab
 * project:     strcmp
 * created on:  2023-01-30 - 10:20 +0100
 * 1st author:  dylan.le - dylan.le
 * description: test
 */

int stu_strcmp(const char *sa, const char *sb)
{
    int i;
    int y;

    i = 0;
    y = 0;
    while (sa[i] != '\0' && sb[y] != '0' && sa[i] == sb[y]) {
        i += 1;
        y += 1;
    }
    if (sa[i] == sb[y]) {
        return(0);
    } else {
        return (sa[i] - sb[y]);
    }
}

