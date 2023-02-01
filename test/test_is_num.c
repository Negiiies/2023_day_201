

#include <criterion/criterion.h>
#include "stu.h"
Test(num, normal) {
    cr_assert_eq(is_num('1'), 1);
}
Test(num, empty) {
    cr_assert_eq(is_num('1'), 1);
}
