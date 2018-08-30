//Author: Mason Hancock
//Date: 08/30/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double daysStayed = 0;
	const double roomCharge = 120.0;
	const double internetCharge = 9.99;
	double totalBill = 0;

	cout << "Please Input Your Name: ";
	cin >> name;
	cout << "How many days will you be staying? ";
	cin >> daysStayed;
	
	totalBill = roomCharge * daysStayed + internetCharge * daysStayed;
	cout << "Your Bill Will Be: $" << totalBill << "\nEnjoy your stay, " << name << "." << endl;

	system("Pause");
	return 0;
}