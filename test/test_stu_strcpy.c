/*
 * E89 Pedagogical & Technical Lab
 * project:     test
 * created on:  2023-01-31 - 10:52 +0100
 * 1st author:  dylan.le - dylan.le
 * description: test_test
 */



#include <criterion/criterion.h>
#include "stu.h"

Test(strcpy, normal) {
    char *dest;

    dest = malloc(7 * sizeof(char));
    cr_assert_str_eq(stu_strcpy(dest, "hello"), "hello");
    free(dest);
}
