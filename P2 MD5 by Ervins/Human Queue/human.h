#ifndef HUMAN_H
#define HUMAN_H


#include<string>
using namespace std;


class Human{
	public:
		Human(string = "", float = 0.0, int = 0);
		void PrintHuman() const;
		
	private:
		string name;
		float height;
		int weight;
};


#endif
