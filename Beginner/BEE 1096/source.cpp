#include <iostream>

int main()
{
	int i{ 1 }, j{ 7 };

	while (i <= 9) {
		for (int n = 0; n < 3; n++) {
			std::cout << "I=" << i << " J=" << j << '\n';
			j -= 1;
		}
		i += 2;
		j = 7;
	}

	return 0;
}