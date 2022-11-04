#include <iostream>
#include <cmath>

template <typename T>
void swap(T& a, T& b, T& c) {
	if (a < b) {
		std::swap(a, b);
	}if (a < c) {
		std::swap(a, c);
	}
}

void triangle(double a, double b, double c) {
	swap(a, b, c);

	if (a >= b + c) {
		std::cout << "NAO FORMA TRIANGULO\n";
	}
	else {
		if (a == b && b == c) {
			std::cout << "TRIANGULO EQUILATERO\n";
		}
		else if (a == b || b == c || a == c) {
			std::cout << "TRIANGULO ISOSCELES\n";
		}
		if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
			std::cout << "TRIANGULO RETANGULO\n";
		}
		if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
			std::cout << "TRIANGULO OBTUSANGULO\n";
		}
		if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
			std::cout << "TRIANGULO ACUTANGULO\n";
		}
	}
}

int main()
{
	double a{}, b{}, c{};
	std::cin >> a >> b >> c;

	triangle(a, b, c);

	return 0;
}