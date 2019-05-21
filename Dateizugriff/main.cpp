#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout << "Programm zu Dateizugriff" << endl << endl;


	string einWort = "Hallo";
	cout << einWort << endl;

	string ganzerSatz = "Bli bla blub";
	cout << ganzerSatz << endl;

	cout << "Bitte geben Sie ein Wort ein: ";
	cin >> einWort;
	cout << einWort << endl;


	cout << "Bitte geben Sie einen Satz ein: ";
	// Hilfsangabe, wenn cin und getline zusammen benutzen,um das ENTER aus dem cin weg zu bekommen
	cin.ignore();
	getline(cin, ganzerSatz);
	cout << ganzerSatz << endl;

	
	system("pause");
	return 0;
}