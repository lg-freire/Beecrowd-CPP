#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int cases{}, amount{}, b{}, r{}, f{};
	string type{};
	cin >> cases;

	for (int i = 0; i < cases; i++) {
		cin >> amount >> type;

		if (type == "C")
			b += amount;
		else if (type == "R")
			r += amount;
		else if (type == "S")
			f += amount;
	}

	int total{ b + r + f };

	cout << "Total: " << total << " cobaias\n" << "Total de coelhos: " << b << "\nTotal de ratos: " << r << "\nTotal de sapos: " << f << '\n';
	printf("Percentual de coelhos: %.2f", (b * 100.0) / total);
	cout << " %" << '\n';
	printf("Percentual de ratos: %.2f", (r * 100.0) / total);
	cout << " %" << '\n';
	printf("Percentual de sapos: %.2f", (f * 100.0) / total);
	cout << " %" << '\n';

	return 0;
}