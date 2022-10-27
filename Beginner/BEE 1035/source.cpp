#include <iostream>

int test(int a, int b, int c, int d) {
	if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int a{}, b{}, c{}, d{};
	std::cin >> a >> b >> c >> d;

	int result{ test(a, b, c, d) };
	if (result == 1) {
		std::cout << "Valores aceitos\n";
	}
	else {
		std::cout << "Valores nao aceitos\n";
	}

	return 0;
}