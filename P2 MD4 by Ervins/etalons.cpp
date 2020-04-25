#include <iostream>
#include "etalons.h"
using namespace std;


ETalons::ETalons(){
	serial = 0;
}


void ETalons::Print() const{
	cout << "Serijas numurs: " << serial << endl;
}
