#include <iostream>
#include <string.h>

using namespace std;

void vidurkis_1()
{
	double a, b, c, d, e;

	cout << "Iveskite 1 skaiciu: ";
	cin >> a;

	cout << "Iveskite 2 skaiciu: ";
	cin >> b;

	cout << "Iveskite 3 skaiciu: ";
	cin >> c;

	cout << "Iveskite 4 skaiciu: ";
	cin >> d;

	cout << "Iveskite 5 skaiciu: ";
	cin >> e;

	double vidurkis = (a + b + c + d + e) / 5;
	cout << "Vidurkis: " << vidurkis << endl;
}

void vidurkis_2()
{
	double arr[5]{};

	cout << "Iveskite 1 skaiciu: ";
	cin >> arr[0];

	cout << "Iveskite 2 skaiciu: ";
	cin >> arr[1];

	cout << "Iveskite 3 skaiciu: ";
	cin >> arr[2];

	cout << "Iveskite 4 skaiciu: ";
	cin >> arr[3];

	cout << "Iveskite 5 skaiciu: ";
	cin >> arr[4];

	int size = sizeof(arr) / sizeof(double);

	double vidurkis = 0;
	for (int i = 0; i < size; i++)
		vidurkis += arr[i];
	vidurkis /= size;

	cout << "Vidurkis: " << vidurkis << endl;
}

int main(int argc, char *argv[])
{
	bool vidurkis2 = false;
	for (int i = 0; i < argc; i++)
	{
		if (strcmp(argv[i], "-vidurkis2") == 0)
			vidurkis2 = true;
	}

	if (vidurkis2)
	{
		cout << "Vidurkis 2" << endl;
		vidurkis_2();
	}
	else
	{
		cout << "Vidurkis 1" << endl;
		vidurkis_1();
	}
	
	return 0;
}