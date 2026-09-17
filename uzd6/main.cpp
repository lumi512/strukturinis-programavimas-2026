#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Iveskite dvizenkli skaiciu: ";
	cin >> num;

	if (!(num >= 10 && num < 100))
	{
		cout << "Skaicius nera dvizenklis" << endl;
		return 1;
	}

	int n1 = num / 10;
	int n2 = num % 10;
	cout << "n1: " << n1 << ", n2: " << n2 << endl;

	int suma = n1 + n2;
	cout << "Suma: " << suma << endl;

	return 0;
}