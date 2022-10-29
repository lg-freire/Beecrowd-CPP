#include <iostream>
#include <cstdio>

double table(int code, int num) {
	if (code == 1) {
		return num * 4;
	}
	else if (code == 2) {
		return num * 4.5;
	}
	else if (code == 3) {
		return num * 5;
	}
	else if (code == 4) {
		return num * 2;
	}
	else if (code == 5) {
		return num * 1.5;
	}
}

int main()
{
	int x{}, y{};
	std::cin >> x >> y;

	printf("Total: R$ %.2f", table(x, y));
	std::cout << '\n';

	return 0;
}