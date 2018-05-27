#include "stdafx.h"
#include "Gwiazdozbior.h"


CGwiazdozbior::CGwiazdozbior()
{
}
CGwiazdozbior* operator+(CGwiazdozbior& Gwiazdozbior, CObiektKosmiczny* Obiekt)
{
	Gwiazdozbior.DodajObiektDoGwazdozbioru(Obiekt);
	return &Gwiazdozbior;
}
CGwiazdozbior* operator-(CGwiazdozbior& Gwiazdozbior, CObiektKosmiczny* Obiekt)
{
	Gwiazdozbior.UsunObiektZGwiazdozbioru(Obiekt);
	return &Gwiazdozbior;
}
void CGwiazdozbior::DodajObiektDoGwazdozbioru(CObiektKosmiczny* obiekt)
{
	CObiektKosmiczny* NowyObiekt = obiekt->clone();
	m_Obiekty.push_back(NowyObiekt);
}
void CGwiazdozbior::UsunObiektZGwiazdozbioru( CObiektKosmiczny* obiekt )
{
	vector<CObiektKosmiczny*> ::iterator it;
	it = find(m_Obiekty.begin(), m_Obiekty.end(), obiekt );
	if (it != m_Obiekty.end())
	{
		m_Obiekty.erase(it);
		delete obiekt;
	}
}

void CGwiazdozbior::print(ostream& str) const
{
	str << "Jestem gwazdozbiorem " << m_Nazwa << "\n";
}
CObiektKosmiczny* CGwiazdozbior::PobierzObiekt(int n)
{
	return m_Obiekty[n];
}
void CGwiazdozbior::WyswietlObiekty()
{
	vector<CObiektKosmiczny*> ::iterator it;
	it = m_Obiekty.begin();
	int licznik = 1;
	while (it != m_Obiekty.end())
	{
		cout <<licznik<<". "<< *it;
		it++;
		licznik++;
	}
}

CGwiazdozbior::~CGwiazdozbior()
{
}
