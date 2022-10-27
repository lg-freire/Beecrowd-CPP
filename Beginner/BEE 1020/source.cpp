#include <iostream>

int main()
{
	int age{}, year{}, month{};
	std::cin >> age;

	if (age >= 365) {
		year = age / 365;
		age = age - (year * 365);
	}

	if (age >= 30) {
		month = age / 30;
		age = age - (month * 30);
	}

	std::cout << year << " ano(s)\n" << month << " mes(es)\n" << age << " dia(s)\n";

	return 0;
}