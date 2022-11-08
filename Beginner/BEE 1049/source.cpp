#include <iostream>
#include <string>
using namespace std;

void classification(string a, string b, string c) {
	if (a == "vertebrado") {
		if (b == "ave") {
			if (c == "carnivoro") {
				cout << "aguia\n";
			}
			else {
				cout << "pomba\n";
			}
		}
		else {
			if (c == "onivoro") {
				cout << "homem\n";
			}
			else {
				cout << "vaca\n";
			}
		}
	}
	else {
		if (b == "inseto") {
			if (c == "hematofago") {
				cout << "pulga\n";
			}
			else {
				cout << "lagarta\n";
			}
		}
		else {
			if (c == "hematofago") {
				cout << "sanguessuga\n";
			}
			else {
				cout << "minhoca\n";
			}
		}
	}
}

int main()
{
	string bone{}, type{}, food{};
	cin >> bone;
	cin >> type;
	cin >> food;

	classification(bone, type, food);

	return 0;
}