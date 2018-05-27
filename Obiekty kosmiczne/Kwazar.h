#pragma once
#include "ObiektKosmiczny.h"
class CKwazar : public CObiektKosmiczny
{
public:
	CKwazar();
	virtual ~CKwazar();
	void print(ostream& str) const override;
	void UstalDaneSpecyficzne() override;
	virtual CKwazar* clone() override { return new CKwazar(*this); }
};

