#include "stdafx.h"
#include "ObiektKosmiczny.h"


CObiektKosmiczny::CObiektKosmiczny()
{
	m_Nazwa = "Nie ustalono nazwy";
}

string CObiektKosmiczny::PobierzNazwe()
{
	return m_Nazwa;
}
ostream & operator<<(ostream & sru, CObiektKosmiczny* obiekt)
{
	obiekt->print(sru);
	return sru;
}
void CObiektKosmiczny::print(ostream& str) const
{
	str << "Nie okrelsono operatora << dla tego obiektu\n";
}

void CObiektKosmiczny::UstalNazwe()
{
	cout << "Podaj nazwe: ";
	cin.clear();
	cin.ignore();

	getline(cin, m_Nazwa);
}
CObiektKosmiczny::~CObiektKosmiczny()
{
}
