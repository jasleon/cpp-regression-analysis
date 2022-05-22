#include "etl.hpp"

#include "csv.hpp"

static std::vector<std::vector<double>> load(csv::CSVReader &reader) {
  std::vector<std::vector<double>> output;
  for (csv::CSVRow &row : reader) {
    std::vector<double> output_row;
    for (csv::CSVField &field : row) {
      output_row.push_back(field.get<double>());
    }
    output.push_back(output_row);
  }
  return output;
}

std::vector<std::vector<double>> etl::load_from_csv(
    std::istringstream &stream) {
  csv::CSVFormat format;
  format.no_header();
  csv::CSVReader reader(stream, format);
  return load(reader);
}
