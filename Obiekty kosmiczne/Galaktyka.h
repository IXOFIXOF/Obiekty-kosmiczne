#pragma once
#include "ObiektKosmiczny.h"
class CGalaktyka : public CObiektKosmiczny
{
public:
	CGalaktyka();
	virtual ~CGalaktyka();
	void print(ostream& str) const override;
	virtual CGalaktyka* clone() override { return new CGalaktyka(*this); }
	void UstalDaneSpecyficzne() override;
private:
	int m_Rozmiar;
};

