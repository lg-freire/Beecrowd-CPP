#include <iostream>
#include <cstdio>

bool triangle(float a, float b, float c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	float x{}, y{}, z{};
	std::cin >> x >> y >> z;

	bool check{ triangle(x, y, z) };
	if (check) {
		printf("Perimetro = %.1f", x + y + z);
	}
	else {
		printf("Area = %.1f", ((x + y) / 2) * z);
	}
	std::cout << '\n';

	return 0;
}