#include <iostream>

int main()
{
	int i{ 1 }, j{ 60 };
	std::cout << "I=" << i << " J=" << j << '\n';

	while (j > 0) {
		i += 3;
		j -= 5;
		std::cout << "I=" << i << " J=" << j << '\n';
	}

	return 0;
}