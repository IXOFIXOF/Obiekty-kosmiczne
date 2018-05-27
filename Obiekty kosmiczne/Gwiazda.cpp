#include "stdafx.h"
#include "Gwiazda.h"


CGwiazda::CGwiazda()
{
	m_OdlegloscOdZiemi = 0;
}

void CGwiazda::print(ostream& str) const
{
	str << "Jestem gwiazda " << m_Nazwa << " i jestem oddalony od ziemi o " << m_OdlegloscOdZiemi << " mln kilometrow\n";
}
void CGwiazda::UstalDaneSpecyficzne()
{
	cout << "Podaj odleglosc od ziemi w mln kilometrow: \n";
	cin >> m_OdlegloscOdZiemi;
}
CGwiazda::~CGwiazda()
{
}
