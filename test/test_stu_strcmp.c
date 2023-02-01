#include <criterion/criterion.h>
#include "stu.h"
Test(strcmp, normal) {
    cr_expect_eq(stu_strcmp("88595", "88595"), 0);
    cr_expect_eq(stu_strcmp("88595", "54532"), 1);
    cr_expect_eq(stu_strcmp("88595", "98495"), -1);
}
