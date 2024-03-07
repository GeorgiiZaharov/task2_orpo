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

double arr[2];
int result;

TEST(roots1, right_answer) {
    result = roots(arr, 1, -5, 6);
    EXPECT_TRUE(result == 1);
    EXPECT_TRUE(arr[0] == 3);
    EXPECT_TRUE(arr[1] == 2);
}
TEST(roots1, float_input_output) {
    result = roots(arr, 1, -4, 3.75);
    EXPECT_TRUE(result == 1);
    EXPECT_TRUE(arr[0] == 2.5);
    EXPECT_TRUE(arr[1] == 1.5);
}

TEST(roots1, one_root) {
    result = roots(arr, 1, -6, 9);
    EXPECT_TRUE(result == 1);
    EXPECT_TRUE(arr[0] == 3);
    EXPECT_TRUE(arr[1] == 3);
}

TEST(roots1, no_root) {
    result = roots(arr, 1, 2, 3);
    EXPECT_TRUE(result == 0);
}

#endif // URAVNENIE_H
