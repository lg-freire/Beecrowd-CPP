#include <iostream>
using namespace std;

void check(int n) {
	if (n == 0)
		cout << "NULL\n";
	else {
		if (n % 2 == 0)
			cout << "EVEN ";
		else
			cout << "ODD ";
		if (n > 0)
			cout << "POSITIVE\n";
		else
			cout << "NEGATIVE\n";
	}
}

int main()
{
	int cases{}, input{};
	cin >> cases;

	for (int i = 0; i < cases; i++) {
		cin >> input;
		check(input);
	}

	return 0;
}