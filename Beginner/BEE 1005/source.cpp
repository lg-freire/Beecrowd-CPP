#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double a{}, b{};
	cin >> a;
	cin >> b;
	double avg = ((a * 3.5) + (b * 7.5)) / 11;
	printf("MEDIA = %.5f", avg);
	cout << '\n';
}