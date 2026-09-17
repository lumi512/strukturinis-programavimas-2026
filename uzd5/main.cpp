#include <iostream>

using namespace std;

int main()
{
	double a, b, c, d, e;

	cout << "Iveskite 1 skaciu: ";
	cin >> a;

	cout << "Iveskite 2 skaciu: ";
	cin >> b;

	cout << "Iveskite 3 skaciu: ";
	cin >> c;

	cout << "Iveskite 4 skaciu: ";
	cin >> d;

	cout << "Iveskite 5 skaciu: ";
	cin >> e;

	double vidurkis = (a + b + c + d + e) / 5;
	cout << "Vidurkis: " << vidurkis << endl;

	return 0;
}