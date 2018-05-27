// Obiekty kosmiczne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Galaktyka.h"
#include "CzarnaDziura.h"
#include "Gwiazdozbior.h"
#include "Gwiazda.h"
#include "Kwazar.h"
#include "ObiektKosmiczny.h"
void UsunObiektZGwazdozbioru( vector< CGwiazdozbior* >& Gwiazdoziobry);
void DodajObiektDoGwiazdozbioru(vector <CGwiazdozbior*>& Gwiazdozbiory, vector<CObiektKosmiczny*>& Obiekty);
CObiektKosmiczny* DodajObiekt();
CGwiazdozbior* DodajGwiazdozbior();
void WyswietlGwiazdozbiory(vector< CGwiazdozbior* >& Gwiazdozbiory);
void WyswietlObiekty(vector< CObiektKosmiczny*>& Obiekty);
int main()
{
	vector< CGwiazdozbior* > Gwiazdozbiory;
	vector< CObiektKosmiczny* >Obiekty;
	int wybor = 0;
	do
	{

		cout << "1. Dodaj obiekt kosmiczny\n"
			<< "2. Dodaj gwiazdozbior\n"
			<< "3. Dodaj obiekt do gwiazdozbioru\n"
			<< "4. Usun obiekt z gwiazdozbioru\n"
			<< "5. Wyswietl obiekty\n"
			<< "6. Wyswietl gwiazdozbiory\n";
		cin >> wybor;
		switch (wybor)
		{
		case 1:
		{
			Obiekty.push_back(DodajObiekt());
			system("cls");
			break;
		}
		case 2:
		{
			Gwiazdozbiory.push_back(DodajGwiazdozbior());
			system("cls");
			break;
		}
		case 3:
		{
			DodajObiektDoGwiazdozbioru(Gwiazdozbiory, Obiekty);
			system("cls");
			break;
		}
		case 4:
		{
			UsunObiektZGwazdozbioru(Gwiazdozbiory);
			system("cls");
			break;
		}
		case 5:
		{
			WyswietlObiekty(Obiekty);
			break;
		}
		case 6:
		{
			WyswietlGwiazdozbiory(Gwiazdozbiory);
			break;
		}
		default:
			break;
		}


	} while (wybor != 7);


	std::cout << "Klasy bazowe obiekty kosmiczne,"<<
		" klasy pochodne gwiazdy, kwazary, galaktyki, czarne dziury, konstelacje, gwiazdozbiory."<< 
		" Przeci¹¿yæ operator strumienia i dodawania i odejmowania obiektów z gwiazdozbiorów oraz parê"<<
		" operatorów wed³ug w³asnego pomys³u.\n";

	std::cin.get();
    return 0;
}
void WyswietlGwiazdozbiory(vector< CGwiazdozbior* >& Gwiazdozbiory)
{
	vector< CGwiazdozbior* > ::iterator it;
	it = Gwiazdozbiory.begin();
	while (it != Gwiazdozbiory.end())
	{
		cout << *it;
		it++;
	}
}

void WyswietlObiekty(vector< CObiektKosmiczny*>& Obiekty)
{
	vector<CObiektKosmiczny*> ::iterator it;
	it = Obiekty.begin();
	while (it != Obiekty.end())
	{
		cout << *it;
		it++;
	}
}
CGwiazdozbior* DodajGwiazdozbior()
{
	CGwiazdozbior* oGwiazdozbior = new CGwiazdozbior;
	oGwiazdozbior->UstalNazwe();
	return oGwiazdozbior;
}
CObiektKosmiczny* DodajObiekt()
{
	CObiektKosmiczny* Dodany = nullptr;
	cout << "Wybierz jaki obiekt chcesz dodac: \n";
	cout << "1. Czarna dziura\n"
		<< "2. Galaktyka\n"
		<< "3. Gwiazda\n"
		<< "4. Kwazar\n";
	int wybor; cin >> wybor;
	switch (wybor)
	{
	case 1: Dodany = new CCzarnaDziura; break;
	case 2: Dodany = new CGalaktyka; break;
	case 3: Dodany = new CGwiazda; break;
	case 4: Dodany = new CKwazar; break;
	default:
		break;
	}
	Dodany->UstalNazwe();
	Dodany->UstalDaneSpecyficzne();
	return Dodany;
}
void UsunObiektZGwazdozbioru(vector <CGwiazdozbior* >& Gwiazdozbiory)
{
	vector< CGwiazdozbior* > ::iterator it;
	it = Gwiazdozbiory.begin();
	int licznik = 1;
	int KtoryGwiazdozbior = 0;
	int KtoryObiekt = 0;
	cout << "Z ktorego gwiazdozbioru?: \n";
	while (Gwiazdozbiory.end() != it)
	{
		cout << licznik << ". " << (*it)->PobierzNazwe() << "\n";
		licznik++;
		it++;
	}
	cin >> KtoryGwiazdozbior;
	cout << " Wybierz obiekt: \n";
	Gwiazdozbiory[KtoryGwiazdozbior - 1]->WyswietlObiekty();
	cin >> KtoryObiekt;
	CObiektKosmiczny* DoUsuniecia = Gwiazdozbiory[KtoryGwiazdozbior - 1]->PobierzObiekt(KtoryObiekt - 1);
	Gwiazdozbiory[KtoryGwiazdozbior - 1] = *Gwiazdozbiory[KtoryGwiazdozbior - 1] - DoUsuniecia;

}
void DodajObiektDoGwiazdozbioru(vector <CGwiazdozbior*>& Gwiazdozbiory, vector<CObiektKosmiczny*>& Obiekty)
{
	vector< CGwiazdozbior* > ::iterator it;
	vector< CObiektKosmiczny*> ::iterator itt;
	it = Gwiazdozbiory.begin();
	itt = Obiekty.begin();
	int licznik = 1;
	int KtoryGwiazdozbior = 0;
	int KtoryObiekt = 0;
	cout << "Do ktorego gwiazdozbioru: \n";
	while (Gwiazdozbiory.end() != it)
	{
		cout << licznik << ". " << (*it)->PobierzNazwe() << "\n";
		licznik++;
		it++;
	}
	licznik = 1;
	cin >> KtoryGwiazdozbior;
	cout << " Wybierz obiekt: \n";
	while (Obiekty.end() != itt)
	{
		cout << licznik << ". " << (*itt)->PobierzNazwe() << "\n";
		licznik++;
		itt++;
	}
	cin >> KtoryObiekt;
	
	Gwiazdozbiory[KtoryGwiazdozbior - 1] = *Gwiazdozbiory[KtoryGwiazdozbior - 1] + Obiekty[KtoryObiekt - 1];
}
