#include "stdafx.h"
#include "CzarnaDziura.h"



CCzarnaDziura::CCzarnaDziura()
{
	m_PredkscPochlanianiaObiektow = 0;
}
void CCzarnaDziura::UstalDaneSpecyficzne()
{
	cout << "Podaj predkosc pochlaniania obiektow w jednostce ilsoc/sekunde: \n";
	cin >> m_PredkscPochlanianiaObiektow;
}
void CCzarnaDziura::print(ostream& str) const
{
	str << "Jestem czarna dziura."<<" Nazywam sie "<<m_Nazwa<<". Pochlaniam obiekty w tempie " << m_PredkscPochlanianiaObiektow
		<< " obiektow na sekunde\n";
}

CCzarnaDziura::~CCzarnaDziura()
{
}
