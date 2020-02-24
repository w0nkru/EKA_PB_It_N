#include <iostream>
#include "computer.h"
#include "monitor.h"
#include "complect.h"
using namespace std;


int main(){
	Complect set("Gaming", "i7 8700K", "RTX 2070 SUPER", 1539.99, "ASUS", "2560x1440", 274.79);
	
	set.PrintComplect();
	cout << endl;
	
	system("pause");
	return 0;
}
