#include <iostream>

int main()
{
	int input{}, even{ 0 }, odd{ 0 }, pos{ 0 }, neg{ 0 };
	for (int i = 0; i < 5; i++) {
		std::cin >> input;

		if (input % 2 == 0)
			even = even + 1;
		else
			odd = odd + 1;
		if (input > 0)
			pos = pos + 1;
		else if (input < 0)
			neg = neg + 1;
	}

	std::cout << even << " valor(es) par(es)\n" << odd << " valor(es) impar(es)\n"
		<< pos << " valor(es) positivo(s)\n" << neg << " valor(es) negativo(s)\n";

	return 0;
}