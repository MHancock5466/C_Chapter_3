#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int firstNum;
	int secondNum;
	int add;
	int sub;
	int mult;
	int div;
	int rem;

	cout << "What is your name? ";
	cin >> name;
	cout << "Enter your first number: ";
	cin >> firstNum;
	cout << "Enter your second number: ";
	cin >> secondNum;
	
	add = firstNum + secondNum;
	sub = firstNum - secondNum;
	mult = firstNum * secondNum;
	div = firstNum / secondNum;
	rem = firstNum % secondNum;

	cout << firstNum << " + " << secondNum << " = " << add << endl;
	cout << firstNum << " - " << secondNum << " = " << sub << endl;
	cout << firstNum << " * " << secondNum << " = " << mult << endl;
	cout << firstNum << " / " << secondNum << " = " << div << " Remainder of: " << rem << endl;

	system("Pause");
	return 0;
}