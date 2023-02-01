#include <criterion/criterion.h>
#include "stu.h"
Test(strcat, normal) {
    char *dest;

    dest = malloc (sizeof(char) *10);
    strcpy(dest, "hello");
    cr_assert_str_eq(stu_strcat(dest, "world"), "helloworld");
}
