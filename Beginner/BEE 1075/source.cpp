#include <iostream>

int main()
{
	int input{};
	std::cin >> input;

	for (int i = 1; i <= 10000; i++) {
		if (i % input == 2)
			std::cout << i << '\n';
	}

	return 0;
}