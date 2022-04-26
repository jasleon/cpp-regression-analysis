#include "etl.hpp"
#include "gtest/gtest.h"

TEST(etl, add) { EXPECT_EQ(3, etl::add(1, 2)); }
