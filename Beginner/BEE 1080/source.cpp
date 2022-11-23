#include <iostream>

int main()
{
	int count{ 1 }, input{}, max{};
	
	for (int i = 1; i < 101; i++) {
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