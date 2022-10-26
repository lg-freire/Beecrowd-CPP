#include <iostream>
#include <cstdio>

int main()
{
	int n{}, n100{}, n50{};
	std::cin >> n;
	std::cout << n << '\n';

	if (n >= 100) {
		n100 = n / 100;
		n = n - (n100 * 100);
		std::cout << n100 << " nota(s) de R$ 100,00\n";
	}

	if (n >= 50) {
		n50 = n / 50;
		n = n - (n50 * 50);
		std::cout << n50 << " nota(s) de R$ 50,00\n";
	}

	return 0;
}