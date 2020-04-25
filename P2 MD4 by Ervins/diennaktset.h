#ifndef DIENNAKTSET_H
#define DIENNAKTSET_H

#include <iostream>
#include <string>
#include "etalons.h"
using namespace std;


class DiennaktsET : public ETalons{
	public:
		DiennaktsET(int = 0);
		virtual void Print() const;
		virtual void Use();
		virtual void Add(int) {};
		
	private:
		int activation_date;
		bool activated;
};


#endif
