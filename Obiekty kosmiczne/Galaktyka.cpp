#include "stdafx.h"
#include "Galaktyka.h"


CGalaktyka::CGalaktyka()
{
	m_Rozmiar = 0;
}
void CGalaktyka::print(ostream& str) const
{
	str << "Jestem galaktyka, nazywam sie " << m_Nazwa << " i moj rozmiar to " << m_Rozmiar << " mln kilometrow^2\n";
}

void CGalaktyka::UstalDaneSpecyficzne()
{
	cout << "Podaj rozmiar galaktyki w mln kilometrow^2:\n";
	cin >> m_Rozmiar;
}
CGalaktyka::~CGalaktyka()
{
}
