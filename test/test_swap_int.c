#include <criterion/criterion.h>
#include "stu.h"
Test(swap, normal) {
    int tata;
    int toto;
    tata = 4;
    toto = 9655;
    swap_int(&tata, &toto);
    cr_assert_eq(tata, 9655);
    cr_assert_eq(toto, 4);
}
