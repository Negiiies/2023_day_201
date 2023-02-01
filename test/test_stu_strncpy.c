#include <criterion/criterion.h>
#include "stu.h"
Test(strcnpy, normal) {

    char *dest;

    dest = malloc(7 * sizeof(char));
    cr_assert_str_eq(stu_strncpy(dest, "hello", 3), "hel");
}
