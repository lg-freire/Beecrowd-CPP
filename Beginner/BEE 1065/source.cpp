#include <iostream>

int main()
{
	int input{}, count{ 0 };

	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		if (input % 2 == 0)
			count = count + 1;
	}

	std::cout << count << " valores pares\n";

	return 0;
}