#include <iostream>

std::string plane(float x, float y) {
	if (x > 0 && y > 0) {
		return "Q1";
	}
	else if (x < 0 && y > 0) {
		return "Q2";
	}
	else if (x < 0 && y < 0) {
		return "Q3";
	}
	else if (x > 0 && y < 0) {
		return "Q4";
	}
	else if (x == 0 && y == 0) {
		return "Origem";
	}
	else if (y == 0) {
		return "Eixo X";
	}
	else {
		return "Eixo Y";
	}
}

int main()
{
	float x{}, y{};
	std::cin >> x >> y;

	std::cout << plane(x, y) << '\n';

	return 0;
}