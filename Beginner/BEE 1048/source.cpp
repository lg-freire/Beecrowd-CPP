#include <iostream>
#include <cstdio>

int percentage(double n) {
	if (n <= 400) {
		return 15;
	}
	else if (400 < n && n <= 800) {
		return 12;
	}
	else if (800 < n && n <= 1200) {
		return 10;
	}
	else if (1200 < n && n <= 2000) {
		return 7;
	}
	else {
		return 4;
	}
}

int main()
{
	double salary{};
	std::cin >> salary;

	int percent{ percentage(salary) };
	double raise{ salary * (percent / 100.0) };

	printf("Novo salario: %.2f", salary + raise);
	std::cout << '\n';
	printf("Reajuste ganho: %.2f", raise);
	std::cout << "\nEm percentual: " << percent << " %\n";

	return 0;
}