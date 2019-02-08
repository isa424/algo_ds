// algo_ds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "functions.h"

void sort_char()
{
	char list[5] = { 'b', 'd', 'c', 'a', 'e' };
	int size = sizeof(list) / sizeof(char);

	bubble_sort(list, size);

	std::cout << "Sorted characters:" << std::endl;

	for (char n : list) {
		std::cout << n << "\t";
	}

	std::cout << std::endl;
}

void sort_int()
{
	int list[5] = { 3, 2, 4, 1, 5 };
	int size = sizeof(list) / sizeof(int);

	selection_sort(list, size);

	std::cout << "Sorted ints:" << std::endl;;

	for (int n : list) {
		std::cout << n << "\t";
	}

	std::cout << std::endl;
}

void sort_string()
{
	std::string list[5] = {"cpu", "car", "dev", "cap", "cnn"};
	int size = sizeof(list) / sizeof(std::string);

	insertion_sort(list, size);

	std::cout << "Sorted strings:" << std::endl;;

	for (std::string n : list) {
		std::cout << n.c_str() << "\t";
	}
	
	std::cout << std::endl;
}

int main()
{
	sort_char();
	sort_int();
	sort_string();

	return 0;
}
