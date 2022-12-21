#include <iostream>
#include <string>
#include <vector>

int main()
{
	int size;
	std::cin >> size;

	int* array = new int[size];
	std::vector<int> odd_numbers;

	std::cout << "Array: ";
	for (int i = 0; i != size; i++)
	{
		array[i] = rand() % 100;
		std::cout << array[i] << ' ';
		if (array[i]%2 != 0)
			odd_numbers.push_back(array[i]);
	}

	std::cout << std::endl << "Result: ";
	for (auto a : odd_numbers)
	{
		std::cout << a << ' ';
	}

	delete[] array;
	return 0;
}