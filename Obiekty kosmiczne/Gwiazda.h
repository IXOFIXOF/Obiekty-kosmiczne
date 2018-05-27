#pragma once
#include "ObiektKosmiczny.h"
class CGwiazda : public CObiektKosmiczny
{
public:
	CGwiazda();
	virtual ~CGwiazda();
	void print(ostream& str) const override;
	void UstalDaneSpecyficzne() override;
	virtual CGwiazda* clone() override { return new CGwiazda(*this); }
protected:
	int m_OdlegloscOdZiemi;
};

