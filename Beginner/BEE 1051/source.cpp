#include <iostream>
#include <cstdio>

float taxes(float n) {
	if (n <= 2000)
		return 0;
	else if (2000 < n && n <= 3000) {
		n = ((n - 2000) * 0.08);
		return n;
	}
	else if (3000 < n && n <= 4500) {
		n = 80 + ((n - 3000) * 0.18);
		return n;
	}
	else {
		n = 350 + ((n - 4500) * 0.28);
		return n;
	}
}

int main()
{
	float wage{};
	std::cin >> wage;

	float final{ taxes(wage) };

	if (final == 0)
		std::cout << "Isento\n";
	else {
		printf("R$ %.2f", final);
		std::cout << '\n';
	}

	return 0;
}