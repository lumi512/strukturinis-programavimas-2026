#include <iostream>
#include <string>

using namespace std;

int main()
{
	string marke;
	string modelis;

	int metai;
	float litrazas;
	string spalva;

	cout << "Iveskite marke: ";
	cin >> marke;

	cout << "Iveskite modeli: ";
	cin >> modelis;

	cout << "Iveskite metus: ";
	cin >> metai;

	cout << "Iveskite litraza: ";
	cin >> litrazas;

	cout << "Iveskite spalva: ";
	cin >> spalva;

	cout << "Automobilis " << marke << " " << modelis << " yra pagamintas " << metai << " metais. ";
	cout << "Jo motoras " << litrazas << " litrazo. ";
	cout << "Automobilis yra " << spalva << " spalvos." << endl;

	return 0;
}