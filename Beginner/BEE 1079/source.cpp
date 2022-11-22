#include <iostream>
#include <iomanip>

float average(float a, float b, float c) {
	return ((a * 2) + (b * 3) + (c * 5)) / 10;
}

int main()
{
	int cases{};
	float n1{}, n2{}, n3{};
	std::cin >> cases;
	std::cout << std::setprecision(2);

	for (int i = 0; i < cases; i++) {
		std::cin >> n1 >> n2 >> n3;
		std::cout << average(n1, n2, n3) << '\n';
	}

	return 0;
}