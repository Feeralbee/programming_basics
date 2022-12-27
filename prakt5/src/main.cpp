#include <iostream>
#include <string>
#include <fstream>


class Employer
{
private:
	std::string surname;
	int experience;
	int wages_in_hour;
	int hours;
public:
	Employer() = default;
	void input_data()
	{
		std::cout << "Input surname: ";
		std::cin >> surname;

		std::cout << "\nInput experience: ";
		std::cin >> experience;

		std::cout << "\nInput wages in hour: ";
		std::cin >> wages_in_hour;

		std::cout << "\nInput hours: ";
		std::cin >> hours;
	}

	int get_wages()
	{
		return wages_in_hour * hours;
	}

	double get_prize()
	{
		if (experience <= 1) return 0;
		else if (experience > 1 && experience <= 3) return (get_wages() * 0.05);
		else if (experience > 3 && experience <= 5) return (get_wages() * 0.08);
		else if (experience > 5) return (get_wages() * 0.15);
		return 0;
	}

	void output_data()
	{
		std::cout << "Surname: " << surname << std::endl;
		std::cout << "Experience: " << experience << std::endl;
		std::cout << "Wages in hour: " << wages_in_hour << std::endl;
		std::cout << "Hours: " << hours << std::endl;
		std::cout << "Wages: " << get_wages() << std::endl;
		std::cout << "Prize: " << get_prize() << std::endl;
	}
	
	void save_data(std::string file_path)
	{
		std::ofstream file(file_path, std::ios::app);
		file << "Surname: " << surname << std::endl;
		file << "Experience: " << experience << std::endl;
		file << "Wages in hour: " << wages_in_hour << std::endl;
		file << "Hours: " << hours << std::endl;
		file << "Wages: " << get_wages() << std::endl;
		file << "Prize: " << get_prize() << std::endl;
		file.close();
	}
};

int main()
{
	Employer vlad;

	vlad.input_data();
	vlad.output_data();
	vlad.save_data("file.txt");

	return 0;
}