#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color;
	string est;
	string bodyPlural;
	string animal;
	string noun;
	string nounPlural;
	int a;
	int b;
	int c;

	cout << "What is your favorite color? ";
	cin >> color;
	cout << "Name a word ending in 'est': ";
	cin >> est;
	cout << "Name a plural body part: ";
	cin >> bodyPlural;
	cout << "Name an animal : ";
	cin >> animal;
	cout << "Name a noun: ";
	cin >> noun;
	cout << "Name a plural noun: ";
	cin >> nounPlural;
	cout << "Choose a number: ";
	cin >> a;
	cout << "Choose another number: ";
	cin >> b;
	c = a - b;

	cout << "The " << color << " dog is the " << est << " dog of all. It has " << c << " " << bodyPlural << ", and a " << animal
		<< " shaped like a noun. It loves to eat " << nounPlural << ", though it will eat most anything." << endl;

	system("Pause");
	return 0;
}