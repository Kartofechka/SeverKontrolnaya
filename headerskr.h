#ifndef HEADERSKR_H_
#define HEADERSKR_H_

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <windows.h>

int32_t ExtractNumber(const std::string&);
void SortByNums(std::string*, int32_t);
void PrintString(std::string*, int32_t);

#endif
