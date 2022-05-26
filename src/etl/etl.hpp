#ifndef SRC_ETL_ETL_HPP_
#define SRC_ETL_ETL_HPP_

#include <fstream>
#include <sstream>
#include <vector>

#include "Eigen/Dense"
namespace etl {
std::vector<std::vector<double>> load_from_csv(std::istringstream &stream);
std::vector<std::vector<double>> load_from_csv(std::ifstream &stream);
Eigen::MatrixXd convert_to_matrix(
    std::vector<std::vector<double>> const &source);
}  // namespace etl

#endif  // SRC_ETL_ETL_HPP_
