#ifndef CELLPHONE_H
#define CELLPHONE_H


#include "phone.h"


class CellPhone : public Phone{
	public:
		CellPhone(int = 0, int = 0);
		void SetBattery(int);
		int GetBattery();
		void PrintPhone() const;
		
	protected:
		int battery;
};


#endif
