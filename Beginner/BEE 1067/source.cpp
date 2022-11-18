#include <iostream>

int main()
{
	int input{};
	std::cin >> input;

	for (int i = 1; i <= input; i++) {
		if (i % 2 != 0)
			std::cout << i << '\n';
	}

	return 0;
}