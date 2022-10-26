#include <iostream>
#include <cstdio>

int main()
{
	int time{}, speed{};
	std::cin >> time;
	std::cin >> speed;

	printf("%.3f", (time * speed) / 12.0);
	std::cout << '\n';

	return 0;
}