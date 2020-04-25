#ifndef BRAUCIENUSKET_H
#define BRAUCIENUSKET_H


#include "etalons.h"


class BraucienuskET : public ETalons{
	public:
		BraucienuskET(int = 1);
		virtual void Print() const;
		virtual void Use();
		virtual void Add(int) {};
	
	private:
		int trips;
};


#endif
