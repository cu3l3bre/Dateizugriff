#include <iostream>
#include <string>
#include <fstream>	// filestream; Bibliothek zur Arbeit mit Dateien
#include <vector>



using namespace std;


int main()
{
	cout << "Programm zu Dateizugriff" << endl << endl;

	string pathToOutputFile = "test.txt";

	// Objekt erstellen, mit dem wir mit einer Datei arbeien können

	// outputfilestream
	ofstream ausgabeStrom;
	ausgabeStrom.open(pathToOutputFile);
	ausgabeStrom << "Hallo das ist ein bla " << endl;
	ausgabeStrom << "hoi hoi hoi " << endl;
	ausgabeStrom << "beep beep beep " << endl;
	ausgabeStrom.close();



	string pathToInputFile = "test2.txt";
	string eineZeile = "";
	// inputfilestream
	ifstream eingabeStrom;		// Erzeugen eines Objektes mit Standard Kontruktor
	//ifstream eingabeStrom("test.txt"); // Benutzen eines allg. Konstruktors, wo der Pfad direkt mit übergeben wird
	vector<string> dateiInhalt;


	
	eingabeStrom.open(pathToInputFile);

	// Prüfen, ob wir mit Datei arbeiten können
	// 1. Ist die Datei vorhanden?
	// 2. Kann die Datei geöffnet werden? Fehler? Kaputt?
	// 3. Dateiende noch nicht erreicht (EOF)?

	if (eingabeStrom.good())
	{
		
		while (!eingabeStrom.eof()) // gibts auch noch, nur zur info für mich, man könnte abr auch schlichtt das .good() in die while setzen
		{
			//eingabeStrom >> test;				// anlalog zu cin
			getline(eingabeStrom, eineZeile);	// Zeile einlesen
			dateiInhalt.push_back(eineZeile);	// Zeile ans Ende der Liste anfügen
		}
		eingabeStrom.close();
	}

	cout << "Ausgabe der for-loop" << endl << endl;
	for (int i = 0; i < dateiInhalt.size(); i++)
	{
		cout << dateiInhalt[i] << endl;
	}



	// while (getline(eingabeStrom, eineZeile));	// kurze Variante von Matus 
	

	
	





	//-----------------------------------------------------------------------------------------------------------//
	/*

	// Zum Abgleich mit der Konsole

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
	*/
	
	system("pause");
	return 0;
}