#include <iostream>

template<typename T>
void sort(T& x, T& y, T& z) {
	if (x > y) {
		std::swap(x, y);
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

	sort(x, y, z);
	std::cout << x << '\n' << y << '\n' << z << '\n' << '\n'
		<< a << '\n' << b << '\n' << c << '\n';

	return 0;
}