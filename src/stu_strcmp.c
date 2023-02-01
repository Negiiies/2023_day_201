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

    i = 0;
    while (sa[i] != '\0' && sb[i] != '\0' && sa[i] == sb[i]) {
        i += 1;
    }
    if (sa[i] > sb[i]) {
        return(1);
    } else if (sa[i] < sb[i]) {
        return -1;
    } else {
        return 0;
    }
}
