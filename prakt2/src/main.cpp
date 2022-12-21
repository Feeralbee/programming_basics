#include <iostream>
#include <string>

std::string init_flat(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			return "I";
		}
		else if (y < 0)
		{
			return "IV";
		}
	}
	else if (x < 0)
	{
		if (y > 0)
		{
			return "II";
		}
		else if (y < 0)
		{
			return "III";
		}
	}
}

int main()
{
	int x;
	int y;

	std::cout << "Input X: ";
	std::cin >> x;

	std::cout << "Input Y: ";
	std::cin >> y;

	if (x == 0 || y == 0)
	{
		std::cout << "Error!";
	}
	else
	{
		std::cout << init_flat(x, y) << " flat";
	}
	return 0;
}