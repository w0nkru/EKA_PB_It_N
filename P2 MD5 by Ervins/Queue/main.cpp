#include <iostream>
#include "queue.h"
#include "queue.cpp"
using namespace std;


int main(){
	Queue<int> in;
	Queue<float> fl(10);
	Queue<char> ch(15);
	
	
	cout << "*----INT datu tipa elementu rinda----*" << endl;
	
	for(int i = 0; i < 4; i++){
		in.enqueue(i);
	}
	
	cout << "Elementu rinda" << endl;
	in.PrintQueue();
	cout << "\n//Pievienojam elementu rindai//" << endl;
	in.enqueue(7);
	in.PrintQueue();
	cout << "\n//Meginam pievienot vel 1 elementu rindai//" << endl;
	in.enqueue();
	in.PrintQueue();
	cout << "\n//Iznemam elementu no rindas//" << endl;
	in.dequeue();
	in.PrintQueue();
	cout << "\n//Pievienojam elementu rindai//" << endl;
	in.enqueue(89);
	in.PrintQueue();
	cout << endl << endl;
	system("pause");
	system("cls");
	
	
	cout << "*----FLOAT datu tipa elementu rinda----*" << endl;
	
	for(int i = 1; i < 9; i++){
		fl.enqueue(i * 0.67);
	}
	
	cout << "Elementu rinda" << endl;
	fl.PrintQueue();
	cout << "\n//Pievienojam 2 elementus rindai//" << endl;
	fl.enqueue(9.99);
	fl.enqueue(6.9);
	fl.PrintQueue();
	cout << "\n//Meginam pievienot vel 1 elementu rindai//" << endl;
	fl.enqueue();
	fl.PrintQueue();
	cout << "\n//Iznemam 3 elementus no rindas//" << endl;
	fl.dequeue();
	fl.dequeue();
	fl.dequeue();
	fl.PrintQueue();
	cout << "\n//Pievienojam elementu rindai" << endl;
	fl.enqueue(189.33);
	fl.PrintQueue();
	cout << endl << endl;
	system("pause");
	system("cls");
	
	
	cout << "*----CHAR datu tipa elementu rinda----*" << endl;
	
	for(int i = 97, j = 0; j < 15; i++, j++){
		ch.enqueue(i);
	}
	
	ch.PrintQueue();
	cout << "\n//Meginam pievienot vel 1 elementu rindai//" << endl;
	ch.enqueue();
	ch.PrintQueue();
	cout << "\n//Iznemam 2 elementus no rindas//" << endl;
	ch.dequeue();
	ch.dequeue();
	ch.PrintQueue();
	cout << "\n//Pievienojam 2 lementus rindai//" << endl;
	ch.enqueue('$');
	ch.enqueue('&');
	ch.PrintQueue();
	cout << endl << endl;
	
	
	system("pause");
	return 0;
}
