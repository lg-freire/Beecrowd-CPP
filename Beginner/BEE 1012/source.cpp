#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double a{}, b{}, c{};
	cin >> a >> b >> c;

	printf("TRIANGULO: %.3f", (a * b) / 2);
	cout << '\n';
	printf("CIRCULO: %.3f", (c * c) * 3.14159);
	cout << '\n';
	printf("TRAPEZIO: %.3f", ((a + b) / 2) * c);
	cout << '\n';
	printf("QUADRADO: %.3f", b * b);
	cout << '\n';
	printf("RETANGULO: %.3f", a * b);
	cout << '\n';

	return 0;
}