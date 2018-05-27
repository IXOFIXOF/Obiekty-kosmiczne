#pragma once
#include "ObiektKosmiczny.h"
class CGwiazdozbior : public CObiektKosmiczny
{
public:
	CGwiazdozbior();
	void DodajObiektDoGwazdozbioru(CObiektKosmiczny* obiekt);
	void UsunObiektZGwiazdozbioru(CObiektKosmiczny* obiekt );
	CObiektKosmiczny* PobierzObiekt(int n);
	void WyswietlObiekty();
	virtual ~CGwiazdozbior();
	void print(ostream& str) const override;
	virtual CGwiazdozbior* clone() override { return new CGwiazdozbior(*this); }
	friend CGwiazdozbior* operator+(CGwiazdozbior& Gwiazdozbior, CObiektKosmiczny* Obiekt);
	friend CGwiazdozbior* operator-(CGwiazdozbior& Gwiazdozbior, CObiektKosmiczny* Obiekt);
protected:
	vector<CObiektKosmiczny*> m_Obiekty;
};

