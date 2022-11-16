#include <iostream>

int main()
{
	int nums{ 0 };
	float total{};

	for (int i = 0; i < 6; i++) {
		float user{};
		std::cin >> user;

		if (user > 0) {
			nums = nums + 1;
			total = total + user;
		}
	}

	std::cout << nums << " valores positivos\n";
	printf("%.1f", total / nums);
	std::cout << '\n';

	return 0;
}