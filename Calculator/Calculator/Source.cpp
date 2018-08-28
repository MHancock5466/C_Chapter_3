#include <iostream>
#include <string>
using namespace std;

int main()
{
	int firstNum, secondNum;

	cout << "Enter a number: ";
	cin >> firstNum;
	cout << "Enter another number: ";
	cin >> secondNum;
	cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << endl;
	cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << endl;
	cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << endl;
	cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << " Remainder of " << firstNum % secondNum << endl;

	system("Pause");
	return 0;
}