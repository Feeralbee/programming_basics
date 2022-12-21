#include <iostream>
#include <fstream>

int main()
{
	int first_number;
	int second_number;
	int third_number;
	
	std::cin >> first_number;
	std::cin >> second_number;
	std::cin >> third_number;

	if (first_number != second_number && first_number && third_number && second_number != third_number)
	{
		std::cout << "There are no equals\n";
	}
	else
	{
		first_number += 5;
		second_number += 5;
		third_number += 5;

		std::ofstream file("file.txt");
		file << "First number: " << first_number
			<< "\nSecond number: " << second_number
			<< "\nThird number: " << third_number;
	}

	return 0;
}