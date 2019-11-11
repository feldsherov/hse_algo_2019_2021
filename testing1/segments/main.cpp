#include "segments.h"

#include <iostream>
#include <sstream>


int main() {
	std::string row;
	std::string operation;
	segments::Point left, right;
	segments::Point point;
	segments::SegmentsSet set;

	while (std::getline(std::cin, row)) {
		std::stringstream row_stream(row);

		row_stream >> operation;
		if (operation == "add") {
			row_stream >> left >> right;
			std::cout << set.Add(left, right) << std::endl;
		} else if (operation == "check") {
			row_stream >> point;
			std::cout << set.IsCoveredByAny(point) << std::endl;
		}
	}
	return 0;
}