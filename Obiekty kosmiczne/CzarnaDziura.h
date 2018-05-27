#pragma once
#include "ObiektKosmiczny.h"
class CCzarnaDziura : public CObiektKosmiczny
{
public:
	CCzarnaDziura();
	void UstalDaneSpecyficzne() override;
	virtual ~CCzarnaDziura();
	virtual CCzarnaDziura* clone() override { return new CCzarnaDziura(*this); }
	void print(ostream& str) const override;
protected:
	int m_PredkscPochlanianiaObiektow;
};

