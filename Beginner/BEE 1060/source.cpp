#include <iostream>

int main()
{
	int pos{ 0 };
	for (int i = 0; i < 6; i++) {
		float num{};
		std::cin >> num;
		
		if (num > 0)
			pos = pos + 1;
	}

	std::cout << pos << " valores positivos\n";

	return 0;
}