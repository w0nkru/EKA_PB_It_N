#ifndef PHONE_H
#define PHONE_H


class Phone{
	public:
		Phone(int = 0);
		void SetWeight(int);
		int GetWeight();
		void PrintPhone() const;
		
	protected:
		int weight;
};


#endif
