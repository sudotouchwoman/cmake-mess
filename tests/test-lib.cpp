#include "test-lib.hpp"
#include "gtest/gtest.h"

#define TEST_A 10
#define TEST_B 4

TEST(MathTest, multiply){
    GTEST_ASSERT_EQ(40, multiply(TEST_A, TEST_B));
    GTEST_ASSERT_NE(14, multiply(TEST_A, TEST_B));
    GTEST_ASSERT_NE(15, multiply(3, 8));
    GTEST_ASSERT_EQ(24, multiply(8, 3));
    GTEST_ASSERT_EQ(24, multiply(3, 8));
}

TEST(MathTest, add){
    GTEST_ASSERT_NE(40, add(TEST_A, TEST_B));
    GTEST_ASSERT_EQ(14, add(TEST_A, TEST_B));
    GTEST_ASSERT_NE(40, add(50, 13));
    GTEST_ASSERT_EQ(90, add(50, 40));
}

int main(int n_args, char* args[]){
    ::testing::InitGoogleTest(&n_args, args);
    return RUN_ALL_TESTS();
}

