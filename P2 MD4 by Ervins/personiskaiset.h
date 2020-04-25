#ifndef PERSONISKAISET_H
#define PERSONISKAISET_H


#include <string>
#include "etalons.h"
using namespace std;


class PersoniskaisET : public ETalons{
	public:
		PersoniskaisET(int = 0, string = "", string = "");
		virtual void Print() const;
		virtual void Use();
		virtual void Add(int = 1);
		
	private:
		int trips;
		string name, surname;
};


#endif
