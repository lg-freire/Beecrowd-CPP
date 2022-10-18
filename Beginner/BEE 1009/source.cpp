#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string name;
	getline(cin, name);

	double wage{}, sales{};
	cin >> wage;
	cin >> sales;

	printf("TOTAL = R$ %.2f", wage + (sales * 0.15));
	cout << '\n';

	return 0;
}