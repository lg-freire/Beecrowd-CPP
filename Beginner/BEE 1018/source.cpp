#include <iostream>

int main()
{
	int n{}, n100{}, n50{}, n20{}, n10{}, n5{}, n2{}, n1{};
	std::cin >> n;
	std::cout << n << '\n';

	if (n >= 100) {
		n100 = n / 100;
		n = n - (n100 * 100);
	}

	if (n >= 50) {
		n50 = n / 50;
		n = n - (n50 * 50);
	}
	
	if (n >= 20) {
		n20 = n / 20;
		n = n - (n20 * 20);
	}

	if (n >= 10) {
		n10 = n / 10;
		n = n - (n10 * 10);
	}

	if (n >= 5) {
		n5 = n / 5;
		n = n - (n5 * 5);
	}

	if (n >= 2) {
		n2 = n / 2;
		n = n - (n2 * 2);
	}

	if (n != 0) {
		n1 = 1;
	}

	std::cout << n100 << " nota(s) de R$ 100,00\n" << n50 << " nota(s) de R$ 50,00\n" << n20 << " nota(s) de R$ 20,00\n"
		<< n10 << " nota(s) de R$ 10,00\n" << n5 << " nota(s) de R$ 5,00\n" << n2 << " nota(s) de R$ 2,00\n"
		<< n1 << " nota(s) de R$ 1,00\n";

	return 0;
}