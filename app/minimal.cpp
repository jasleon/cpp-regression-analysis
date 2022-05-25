#include <algorithm>
#include <fstream>
#include <iostream>
#include <numeric>
#include <string>

#include "etl.hpp"

int main(int argc, char** argv) {
  if (argc < 2) {
    return -1;
  }
  std::ifstream csv{argv[1]};
  auto dataset = etl::load_from_csv(csv);
  int row_number = 0;
  for (auto const& row : dataset) {
    std::cout << ++row_number << ": [ ";
    std::vector<std::string> values;
    std::transform(std::begin(row), std::end(row), std::back_inserter(values),
                   [](double value) { return std::to_string(value); });
    std::cout << std::accumulate(
        std::begin(values), std::end(values), std::string(""),
        [](std::string const& total, std::string& value) {
          return (total.empty() ? value : total + ", " + value);
        });
    std::cout << " ]\n";
  }
  return 0;
}
