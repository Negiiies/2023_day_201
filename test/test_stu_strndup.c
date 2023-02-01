#include <criterion/criterion.h>
#include "stu.h"
Test(strndup, normal) {
    cr_assert_str_eq(stu_strndup("abcdef", 4), "abcd" );
}
