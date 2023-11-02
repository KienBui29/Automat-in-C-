 // ************************************************
 // Projekt:	Automat AP-M319 IT1b 2023
 // Ihr Name:	Kien Bui
 // Datum:		26.01.2023
 // ************************************************

 #include <iostream>
 #include <cstdlib>
 #include <cstdio>
 #include <ctime>
 #include <string>
 #include <iomanip>
 #include <Windows.h>
 #include <conio.h>
 #include <fstream>
 #include <sstream>
 #include <stdexcept>
 #include <vector>

 using namespace std;
 


 // Funktion Zeitstempel
 void Zeit_und_Datum(int *qTag, int *qMonat, int *qJahr, int *qStunde, int *qMinute)
 {
    time_t Zeitstempel;
    tm *nun;
    Zeitstempel = time(0);
    nun = localtime(&Zeitstempel);
    *qTag = nun->tm_mday;
    *qMonat = nun->tm_mon+1;
    *qJahr = nun->tm_year+1900;
    *qStunde = nun->tm_hour;
    *qMinute = nun->tm_min;
 }

 // Hauptfunktion
int main()
{ 
	cout << fixed << setprecision(2);
	
	char Auswahl;
	char Zucker;
	double Preis;
	char Produktbeschreibung;
	double Insgesamt;
	double Geld;
	
	fstream textDatei("Verkauf.txt");
	
	
	//Beispiel: Systemdatum und Zeit auslesen.
	int Tag, Monat, Jahr, Stunde, Minute;
	Zeit_und_Datum(&Tag, &Monat, &Jahr, &Stunde, &Minute);
	cout << "Das Datum: " << Tag << "." << Monat << "." << Jahr << endl;
	cout << "Die Zeit: " << Stunde << ":" << Minute << endl;
	
	
	cout << "\n******************" << endl;
	cout << "* Kaffee Automat *" << endl;
	cout << "*************************" << endl;
	
	cout << "* Nr. 1 Kaffee schwarz *" << endl;
	cout << "*    Preis: 1.50 Fr.    *" << endl;
	cout << "***************************" << endl;
	
	cout << "* Nr. 2 Kaffee Macchiato *" << endl;
	cout << "*     Preis: 2.00 Fr.     *" << endl;
	cout << "***************************" << endl;
	
	cout << "* Nr. 3 Latte Macchiato *" << endl;
	cout << "*    Preis: 3.00 Fr.     *" << endl;
	cout << "***************************" << endl;
	
	cout << "* Nr. 4 Espresso schwarz *" << endl;
	cout << "*    Preis: 2.00 Fr.      *" << endl;
	cout << "*****************************" << endl;
	
	cout << "* Nr. 5 Espresso Macchiato *" << endl;
	cout << "*     Preis: 3.00 Fr.       *" << endl;
	cout << "**********************************" << endl;
	
	cout << "* Nr. 6 Latte Macchiato intenso *" << endl;
	cout << "*        Preis:3.00 Fr.          *" << endl;
	cout << "**********************************" << endl;

	cout << "Waehlen Sie das gewuenschte Produkt aus: " << endl;
	cin >> Auswahl;
	
	cout << "Wollen Sie zusaetzlich Zucker (Antwort: 1 fuer Ja oder 2 fuer Nein): " << endl;
	cin >> Zucker;
	

	
	switch(Auswahl)
	{
		case '1':
		//cin >> "Kaffee schwarz" >> Produktbeschreibung;
		Preis = 1.50;
		
			switch(Zucker)
	{
		case '1':
		Insgesamt = Preis + 0.30;
		cout << "Ihre Bestellung ist mit Zucker" << endl;
			break;
		
		case '2':
		Insgesamt = Preis;
		cout << "Ihre Bestellung ist ohne Zucker" << endl;
			break;
		
		default: 
		cout << "Fehler" << endl;
			break;
	}
		
		cout << "Sie haben die Nummer " << Auswahl << " bestellt." << endl;
		cout << "Das kostet " << Insgesamt << " CHF." << endl;	
		cout << "Geld Einwurf(Nur in Münzen): ";
		cin >> Geld;
		if(Geld == Insgesamt)
	    {
	      cout << "\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	    }
	    else
	    {
	      cout << "\nSie haben kein " << Insgesamt << " Fr. eingeworfen.\n";
	    }
		system("PAUSE");
			break;
			
		case '2':
		//Produktbeschreibung = "Kaffee Macchiato";
		Preis = 2.00;
			switch(Zucker)
	{
		case '1':
		Insgesamt = Preis + 0.30;
		cout << "Ihre Bestellung ist mit Zucker" << endl;
			break;
		
		case '2':
		Insgesamt = Preis;
		cout << "Ihre Bestellung ist ohne Zucker" << endl;
			break;
		
		default: 
		cout << "Fehler" << endl;
			break;
	}
		
		cout << "Sie haben die Nummer " << Auswahl << " bestellt." << endl;
		cout << "Das kostet " << Insgesamt << " CHF." << endl;
				cout << "Geld Einwurf(Nur in Münzen): ";
		cin >> Geld;	
		if(Geld == Insgesamt)
	    {
	      cout << "\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	    }
	    else
	    {
	      cout << "\nSie haben kein " << Insgesamt << " Fr. eingeworfen.\n";
	    }
		system("PAUSE");
			break;
			
		case '3':
		//Produktbeschreibung = "Latte Macchiato";
		Preis = 3.00;
			switch(Zucker)
	{
		case '1':
		Insgesamt = Preis + 0.30;
		cout << "Ihre Bestellung ist mit Zucker" << endl;
			break;
		
		case '2':
		Insgesamt = Preis;
		cout << "Ihre Bestellung ist ohne Zucker" << endl;
			break;
		
		default: 
		cout << "Fehler" << endl;
			break;
	}
		
		cout << "Sie haben die Nummer " << Auswahl << " bestellt." << endl;
		cout << "Das kostet " << Insgesamt << " CHF." << endl;	
				cout << "Geld Einwurf(Nur in Münzen): ";
		cin >> Geld;
		
		if(Geld == Insgesamt)
	    {
	      cout << "\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	    }
	    else
	    {
	      cout << "\nSie haben kein " << Insgesamt << " Fr. eingeworfen.\n";
	    }
		system("PAUSE");
			break;
			
		case '4':
		//Produktbeschreibung = "Espresso schwarz";
		Preis = 2.00;
			switch(Zucker)
	{
		case '1':
		Insgesamt = Preis + 0.30;
		cout << "Ihre Bestellung ist mit Zucker" << endl;
			break;
		
		case '2':
		Insgesamt = Preis;
		cout << "Ihre Bestellung ist ohne Zucker" << endl;
			break;
		
		default: 
		cout << "Fehler" << endl;
			break;
	}
		
		cout << "Sie haben die Nummer " << Auswahl << " bestellt." << endl;
		cout << "Das kostet " << Insgesamt << " CHF." << endl;
				cout << "Geld Einwurf(Nur in Münzen): ";
		cin >> Geld;	
		if(Geld == Insgesamt)
	    {
	      cout << "\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	    }
	    else
	    {
	      cout << "\nSie haben kein " << Insgesamt<< " Fr. eingeworfen.\n";
	    }
		system("PAUSE");
			break;
			
		case '5':
		//Produktbeschreibung = "Espresso Macchiato";
		Preis = 3.00;
			switch(Zucker)
	{
		case '1':
		Insgesamt = Preis + 0.30;
		cout << "Ihre Bestellung ist mit Zucker" << endl;
			break;
		
		case '2':
		Insgesamt = Preis;
		cout << "Ihre Bestellung ist ohne Zucker" << endl;
			break;
		
		default: 
		cout << "Fehler" << endl;
			break;
	}
		
		cout << "Sie haben die Nummer " << Auswahl << " bestellt." << endl;
		cout << "Das kostet " << Insgesamt << " CHF." << endl;
				cout << "Geld Einwurf(Nur in Münzen): ";
		cin >> Geld;	
		if(Geld == Insgesamt)
	    {
	      cout << "\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	    }
	    else
	    {
	      cout << "\nSie haben kein " << Insgesamt << " Fr. eingeworfen.\n";
	    }
		system("PAUSE");
			break;
			
		case '6':
		//Produktbeschreibung = "Latte Macchiato intensoz";
		Preis = 3.00;
			switch(Zucker)
	{
		case '1':
		Insgesamt = Preis + 0.30;
		cout << "Ihre Bestellung ist mit Zucker" << endl;
			break;
		
		case '2':
		Insgesamt = Preis;
		cout << "Ihre Bestellung ist ohne Zucker" << endl;
			break;
		
		default: 
		cout << "Fehler" << endl;
			break;
	}
		
		cout << "Sie haben die Nummer " << Auswahl << " bestellt." << endl;
		cout << "Das kostet " << Insgesamt << " CHF." << endl;	
				cout << "Geld Einwurf(Nur in Münzen): ";
		cin >> Geld;
		if(Geld == Insgesamt)
	    {
	      cout << "\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	    }
	    else
	    {
	      cout << "\nSie haben kein " << Insgesamt << " Fr. eingeworfen.\n";
	    }
		system("PAUSE");
			break;
			
		case 'E':
		cout << "Abbruch" << endl;
		system("PAUSE");
		break;
		
		case 'e':
		cout << "Abbruch" << endl;
		system("PAUSE");
		break;
		
		default: cout << "Unbekannte Eingabe?!" << endl;
			break;

	}
	

	

	
	
		if(textDatei)
	{	
	
		textDatei << "Das Datum: " << Tag << "." << Monat << "." << Jahr << "\nDie Zeit: " << Stunde << ":" << Minute << "\nProduktbeschreibung: " << Produktbeschreibung << "\nPreis: " << Insgesamt << "\nZucker: " << Zucker << endl;
		
	}
	else
	{
		cout << "Dateifehler" << endl << endl;
	}
	

	

 cout << endl;
 system("PAUSE");
 return 0;
}

