#include <iostream>

int main()
{
	int input{}, count{ 0 };
	std::cin >> input;

	while (count < 6) {
		if (input % 2 != 0) {
			std::cout << input << '\n';
			count++;
		}
		input++;
	}

	return 0;
}