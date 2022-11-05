#include <iostream>

int main()
{
	int start{}, end{};
	std::cin >> start >> end;

	if (start == end) {
		std::cout << "O JOGO DUROU 24 HORA(S)\n";
	}
	else if (start < end) {
		std::cout << "O JOGO DUROU " << end - start << " HORA(S)\n";
	}
	else {
		std::cout << "O JOGO DUROU " << (end + 24) - start << " HORA(S)\n";
	}

	return 0;
}