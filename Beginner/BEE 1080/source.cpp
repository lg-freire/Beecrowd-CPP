#include <iostream>

int main()
{
	int count{ 0 }, input{}, max{};
	
	for (int i = 0; i < 100; i++) {
		if (count == 0) {
			std::cin >> input;
			max = input;
			count++;
		}
		else {
			std::cin >> input;
			if (input > max)
				max = input;
			count++;
		}
	}

	std::cout << max << '\n' << count << '\n';

	return 0;
}