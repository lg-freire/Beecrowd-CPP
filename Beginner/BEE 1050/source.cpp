#include <iostream>
using namespace std;

void destination(int n) {
	if (n == 61) {
		cout << "Brasilia\n";
	}
	else if (n == 71) {
		cout << "Salvador\n";
	}
	else if (n == 11) {
		cout << "Sao Paulo\n";
	}
	else if (n == 21) {
		cout << "Rio de Janeiro\n";
	}
	else if (n == 32) {
		cout << "Juiz de Fora\n";
	}
	else if (n == 19) {
		cout << "Campinas\n";
	}
	else if (n == 31) {
		cout << "Belo Horizonte\n";
	}
	else if (n == 29) {
		cout << "Vitoria\n";
	}
	else {
		cout << "DDD nao cadastrado\n";
	}
}

int main()
{
	int ddd{};
	cin >> ddd;

	destination(ddd);

	return 0;
}