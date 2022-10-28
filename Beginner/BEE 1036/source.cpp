#include <iostream>
#include <cmath>
#include<cstdio>

double delta(double a, double b, double c) {
	return pow(b, 2) - (4 * a * c);
}

int main()
{
	double x{}, y{}, z{ };
	std::cin >> x >> y >> z;

	if (x == 0 || delta(x, y, z) < 0) {
		std::cout << "Impossivel calcular\n";
	}
	else {
		double r1{}, r2{};
		r1 = (-y + sqrt(delta(x, y, z))) / (2 * x);
		r2 = (-y - sqrt(delta(x, y, z))) / (2 * x);
		printf("R1 = %.5f", r1);
		std::cout << '\n';
		printf("R2 = %.5f", r2);
		std::cout << '\n';
	}
	
	return 0;
}