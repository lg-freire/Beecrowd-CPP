#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x{};
	cin >> x;
	double y{};
	cin >> y;

	printf("%.3f", x / y);
	cout << " km/l" << '\n';
}