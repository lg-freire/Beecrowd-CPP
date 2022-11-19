#include <iostream>

int main()
{
	int start{}, end{}, sum{ 0 };
	std::cin >> start;
	std::cin >> end;

	if (start > end)
		std::swap(start, end);

	for (int i = start+1; i < end; i++) {
		std::cout << i;
		if (i % 2 != 0)
			sum += i;
	}

	std::cout << sum << '\n';

	return 0;
}