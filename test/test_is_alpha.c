#include <criterion/criterion.h>
#include "stu.h"

Test(alpha, normal) {
    cr_assert_eq(is_alpha('a'), 1);
}

Test(alpha, empty) {
    cr_assert_eq(is_alpha('a'), 1);
}
