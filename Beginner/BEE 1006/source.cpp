#include <iostream>
#include <cstdlib>
using namespace std;

double getScore()
{
	double score{};
	cin >> score;
	
	return score;
}

int main()
{
	double a{ getScore() };
	double b{ getScore() };
	double c{ getScore() };
	double avg{ (a * 2 + b * 3 + c * 5) / 10 };

	printf("MEDIA = %.1f", avg);
	cout << '\n';

	return 0;
}