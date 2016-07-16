//
// Created by Chohee Kim on 7/15/16.
//

#include "gtest/gtest.h"

TEST(basic_check__test_eq_Test, test_eq) {
  EXPECT_EQ(3, 3);
}

TEST(basic_check_text__test_neq_Test, test_neq) {
  EXPECT_NE(1, 2);
}