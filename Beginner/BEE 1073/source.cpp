#include <iostream>

int main()
{
	int input{};
	std::cin >> input;

	for (int i = 1; i <= input; i++) {
		if (i % 2 == 0)
			std::cout << i << "^2 = " << pow(i, 2) << '\n';
	}

	return 0;
}