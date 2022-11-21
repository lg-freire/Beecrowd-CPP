#include <iostream>

int main()
{
	int cases{}, input{}, in{}, out{};
	std::cin >> cases;

	for (int i = 0; i < cases; i++) {
		std::cin >> input;
		if (10 <= input && input <= 20)
			in++;
		else
			out++;
	}

	std::cout << in << " in\n" << out << " out\n";

	return 0;
}