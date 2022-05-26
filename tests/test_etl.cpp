#include <sstream>
#include <vector>

#include "etl.hpp"
#include "gtest/gtest.h"

TEST(etl, load_from_csv) {
  std::istringstream input{R"(1.0,1.1
2.0,2.1)"};
  const std::vector<std::vector<double>> expected{{1.0, 1.1}, {2.0, 2.1}};
  auto observed = etl::load_from_csv(input);
  EXPECT_EQ(expected, observed);
}

TEST(etl, convert_to_matrix) {
  const std::vector<std::vector<double>> source{{1.0, 2.0}, {3.0, 4.0}};
  Eigen::MatrixXd expected(2, 2);
  expected << 1.0, 2.0, 3.0, 4.0;
  auto observed = etl::convert_to_matrix(source);
  EXPECT_EQ(expected, observed);
}
