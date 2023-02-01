/*
 * E89 Pedagogical & Technical Lab
 * project:     strchr
 * created on:  2023-01-30 - 10:44 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

int stu_strchr(const char *str, char search)
{
    int i;
    i = 0;
    while(str[i] != '\0'){
        if (str[i] == '\\' && str[i + 1] == 'n'){
            return 0;
        } else if (str[i] == search) {
            return 1;
        }
        i += 1;
    }
    return 0;
}
