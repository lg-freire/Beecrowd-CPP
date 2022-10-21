#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double radius{};
	cin >> radius;

	printf("VOLUME = %.3f", ((4.0 / 3) * 3.14159 * pow(radius, 3)));
	cout << '\n';
}