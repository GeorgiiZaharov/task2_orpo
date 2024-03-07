#ifndef URAVNENIE_H
#define URAVNENIE_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "roots.h"
}

TEST(group1, num0) {
    double* rez = roots(1, -5, 4);
    double need[2] = {4.000000, 1.000000};

    EXPECT_TRUE(rez[0] == need[0]);
    EXPECT_TRUE(rez[1] == need[1]);
}
TEST(group1, num1) {
    double* rez = roots(1, -3, 2);
    double need[2] = {2.000000, 1.000000};

    EXPECT_TRUE(rez[0] == need[0]);
    EXPECT_TRUE(rez[1] == need[1]);
}
TEST(group1, num2) {
    double* rez = roots(1, -13, 12);
    double need[2] = {12.000000, 1.000000};

    EXPECT_TRUE(rez[0] == need[0]);
    EXPECT_TRUE(rez[1] == need[1]);
}

#endif // URAVNENIE_H
