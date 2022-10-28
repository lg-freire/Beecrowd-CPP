#include <iostream>

int main()
{
	double n{};
	std::cin >> n;

	if (0 <= n && n <= 25) {
		std::cout << "Intervalo [0,25]\n";
	}
	else if (25 < n && n <= 50.0) {
		std::cout << "Intervalo (25,50]\n";
	}
	else if (50 < n && n<= 75.0) {
		std::cout << "Intervalo (50,75]\n";
	}
	else if (75 < n && n <= 100.0) {
		std::cout << "Intervalo (75,100]\n";
	}
	else {
		std::cout << "Fora de intervalo\n";
	}

	return 0;
}