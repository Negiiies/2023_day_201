#include <criterion/criterion.h>
#include "stu.h"
Test(strchr, normal) {
    cr_assert_str_eq(stu_strchr("hello", 'e'), "ello");
}

