#include <iostream>
#include <cstring>
#include <windows.h>

int32_t ExtractNumber(const std::string& str) {
	size_t position = str.find_first_of("0123456789");
	return position == std::string::npos ? 0 : std::atoi(&str[position]);
}

void SortByNums(std::string* array, int32_t size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (ExtractNumber(array[j]) > ExtractNumber(array[j + 1])) {
				std::swap(array[j], array[j + 1]);
			}
		}
	}
}

void PrintString(std::string* array, int32_t size){
for (size_t i{}; i < size; i++) {
	std::cout << array[i] << std::endl;
}