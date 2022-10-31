#include <iostream>


void sort(int x, int y, int z) {
	std::cout << "in sort()\n";
	if (x > y) {
		std::swap(x, y);
		std::cout << x << " " << y << '\n';
	}if (x > z) {
		std::swap(x, z);
	}if (y > z) {
		std::swap(y, z);
	}
}


int main()
{
	int a{}, b{}, c{};
	std::cin >> a >> b >> c;

	int x{ a }, y{ b }, z{ c };

	sort(a, b, c);
	std::cout << a << '\n' << b << '\n' << c << '\n' << '\n';
		//<< a << '\n' << b << '\n' << c << '\n';

	return 0;
}