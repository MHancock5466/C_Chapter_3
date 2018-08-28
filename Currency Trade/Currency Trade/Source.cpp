#include <iostream>
#include <string>
using namespace std;

int main()
{
	double dollars;
	double pounds;
	double pesos;
	double yen;

	cout << "How many American Dollars are you converting? $";
	cin >> dollars;
	pounds = 0.6318 * dollars;
	pesos = 12.8863 * dollars;
	yen = 82.34 * dollars;
	cout << "This equates to: " << "\nBritish Pounds: " << pounds << "\nMexican Pesos: " << pesos << "\nJapanese Yen: " << yen << endl;

	system("Pause");
	return 0;
}