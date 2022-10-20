#include <iostream>
#include <cstdlib>
using namespace std;

float pricePerItem()
{
	int item{}, units{};
	float price{};
	cin >> item >> units >> price;

	return units * price;
}

int main()
{
	float x{ pricePerItem() };
	float y{ pricePerItem() };

	printf("VALOR A PAGAR: R$ %.2f", x + y);
	cout << '\n';
}