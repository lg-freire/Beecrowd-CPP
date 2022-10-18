#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int num{}, hours{};
	float wage{};

	cin >> num;
	cin >> hours;
	cin >> wage;

	cout << "NUMBER = " << num << '\n';
	printf("SALARY = U$ %.2f", wage * hours);
	cout << '\n';

	return 0;
}