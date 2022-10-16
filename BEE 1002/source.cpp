#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double pi{ 3.14159 };
	double r{ };
	cin >> r;
	double a{ (r * r) * pi };
	printf("A=%.4f", a);
	cout << '\n';
	return 0;
}