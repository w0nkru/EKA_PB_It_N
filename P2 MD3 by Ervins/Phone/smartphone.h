#ifndef SMARTPHONE_H
#define SMARTPHONE_H


#include <string>
#include "cellphone.h"
using namespace std;


class SmartPhone : public CellPhone{
	public:
		SmartPhone(string = "none", int = 0, int = 0);
		void SetOS(string);
		string GetOS();
		void PrintPhone() const;
		
	private:
		string OS;
};


#endif
