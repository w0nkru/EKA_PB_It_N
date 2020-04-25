#ifndef ETALONS_H
#define ETALONS_H


class ETalons{
	public:
		ETalons();
		virtual void Print() const;
		virtual void Use() = 0;
		virtual void Add(int) = 0;
	
	protected:
		int serial;
};


#endif
