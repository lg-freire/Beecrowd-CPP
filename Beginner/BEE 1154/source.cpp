#include <iostream>
#include <cstdio>

int main()
{
	int age{ 0 }, total{ 0 }, count{ 0 };
	
	while (age >= 0) {
		total += age;
		count++;
		std::cin >> age;
	}

	printf("%.2f", double{ total / (count - 1.0) });
	std::cout << '\n';

	return 0;
}