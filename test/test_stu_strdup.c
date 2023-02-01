#include "stu.h"
#include <criterion/criterion.h>
Test(strdup, normal) {
    cr_assert_str_eq(stu_strdup("abc"), "abc");
}
