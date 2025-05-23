#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <windows.h>
#include <algorithm>
#include </Other/SeverRepo/KontrolnayaRabotaSeverin/KontrolnayaRabota/KontrolnayaRabota/headerskr.h>



main() {
	int32_t size{ 1 };
	std::cout << "Input size: \n";
	std::cin >> size;
	std::cin.ignore();
	int lengt{ 50 };
	try {
		if (size <= 0) {
			throw std::invalid_argument("size must be positive\n");
		}


		std::string* array = new std::string[size];

		std::cout << "Input string:\n";
		for (int i = 0; i < size; i++) {
			std::getline(std::cin, array[i]);
		}

		SortByNums(array, size);

		std::cout << "\nStrings after sorting:\n";
		
		PrintString(array, size)

	catch (const char* message) {
		std::cout << message << '\n';
	}
	delete[] arr;
	return 0;
}

