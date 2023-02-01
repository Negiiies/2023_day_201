/*
 * E89 Pedagogical & Technical Lab
 * project:     atoi
 * created on:  2023-01-31 - 16:30 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */


#include <criterion/criterion.h>
#include "stu.h"
Test(atoi, normal) {
cr_assert_eq(atoi("120"), 120);
}
