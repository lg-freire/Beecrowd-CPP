#include <iostream>

int convert(int a, int b) {
	return (a * 60) + b;
}

int delta(int start, int end) {
	if (start == end) {
		return 1440;
	}
	else if (start < end) {
		return end - start;
	}
	else {
		return (end + 1440) - start;
	}
}

int main()
{
	int hStart{}, mStart{}, hEnd{}, mEnd{};
	std::cin >> hStart >> mStart >> hEnd >> mEnd;

	int timeStart{ convert(hStart, mStart) };
	int timeEnd{ convert(hEnd, mEnd) };

	int duration{ delta(timeStart, timeEnd) };

	std::cout << "O JOGO DUROU " << duration / 60 << " HORA (S) E " << duration % 60 << " MINUTO (S)\n";

	return 0;
}