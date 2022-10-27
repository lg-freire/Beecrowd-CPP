#include <iostream>

int main()
{
	int time{}, hours{}, min{}, sec{};
	std::cin >> time;

	if (time >= 3600) {
		hours = time / 3600;
		time = time - (hours * 3600);
	}

	if (time >= 60) {
		min = time / 60;
		time = time - (min * 60);
	}

	std::cout << hours << ":" << min << ":" << time << '\n';

	return 0;
}