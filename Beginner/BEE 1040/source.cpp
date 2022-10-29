#include <iostream>
#include <cstdio>

float avg(float n1, float n2, float n3, float n4) {
	return ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
}

float final(float av, float ex) {
	return (av + ex) / 2;
}

int main()
{
	float a{}, b{}, c{}, d{};
	std::cin >> a >> b >> c >> d;

	float average{ avg(a, b, c, d) };
	printf("Media: %.1f", average);
	std::cout << '\n';

	if (average >= 7.0) {
		std::cout << "Aluno aprovado.\n";
	}
	else if (average >= 5.0) {
		std::cout << "Aluno em exame.\n";
		float exam{};
		std::cin >> exam;
		
		std::cout << "Nota do exame: " << exam << '\n';
		float finalScore{ final(average, exam) };
		if (finalScore >= 5.0) {
			std::cout << "Aluno aprovado.\n";
			printf("Media final: %.1f", finalScore);
			std::cout << '\n';
		}
		else {
			std::cout << "Aluno reprovado.\n";
			printf("Media final: %.1f", finalScore);
			std::cout << '\n';
		}
	}
	else {
		std::cout << "Aluno reprovado.\n";
	}

	return 0;
}