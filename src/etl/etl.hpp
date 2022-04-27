#ifndef SRC_ETL_ETL_HPP_
#define SRC_ETL_ETL_HPP_

#include <istream>
#include <vector>
namespace etl {
std::vector<std::vector<double>> load_from_csv(std::istream &stream);
}  // namespace etl

#endif  // SRC_ETL_ETL_HPP_
