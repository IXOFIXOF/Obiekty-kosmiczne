#pragma once
#include <string>
class CObiektKosmiczny
{
public:
	CObiektKosmiczny();
	virtual ~CObiektKosmiczny();
	void UstalNazwe();
	virtual void UstalDaneSpecyficzne() {}
	virtual CObiektKosmiczny* clone() =0;
	friend ostream & operator<<(ostream& sru, CObiektKosmiczny* obiekt);
	string PobierzNazwe();
protected:
	virtual void print(ostream& str) const;
	string m_Nazwa;
};

