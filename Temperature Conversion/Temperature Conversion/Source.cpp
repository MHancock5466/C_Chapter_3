//Converting Fahrenheit to Celcius
//Author: Mason Hancock
//Date: 08/30/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double temp1 = 0;
	double temp2 = 0;
	double temp3 = 0;

	cout << "Input the temperature at 8:00 am: ";
	cin >> temp1;
	cout << "Input the temperature at 12:00 pm: ";
	cin >> temp2;
	do
	{
		cout << "Error: Temperature must not be smaller than the previous temperature.\nInput the temperature at 12:00 pm: ";
		cin >> temp2;
	} while (temp2 < temp1);
	cout << "Input the temperature at 5:00 pm: ";
	cin >> temp3;
	do
	{
		cout << "Error: Temperature must not exceed previous temperature by 10 degrees.\nInput the temperature at 5:00 pm: ";
		cin >> temp3;
	} while (temp3 > 10 + temp2);

	cout << "Temperature at 8:00 am: " << temp1 << " degrees F. " << temp1 * 9 / 5 + 32 << " degrees C." << endl;
	cout << "Temperature at 12:00 pm: " << temp2 << " degrees F. " << temp2 * 9 / 5 + 32 << " degrees C." << endl;
	cout << "Temperature at 5:00 pm " << temp3 << " degrees F. " << temp3 * 9 / 5 + 32 << " degrees C." << endl;

	system("Pause");
	return 0;
}