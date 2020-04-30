#include <iostream>
#include "human.h"
#include "queue.h"
#include "queue.cpp"
using namespace std;


int main(){
	Queue<Human> HumanQueue(3);
	Human a("Janis", 1.86, 76);
	Human b("Peteris", 1.76, 69);
	Human c("Arturs", 1.79, 75);
	Human d("Aleksis", 1.81, 78);
	
	
	cout << "Elementu rinda" << endl;
	HumanQueue.enqueue(a);
	HumanQueue.enqueue(b);
	HumanQueue.PrintQueue();
	cout << "\n//Pievienojam elementu rindai//" << endl;
	HumanQueue.enqueue(c);
	HumanQueue.PrintQueue();
	cout << "\n//Meginam pievienot vel 1 elementu rindai//" << endl;
	HumanQueue.enqueue(d);
	HumanQueue.PrintQueue();
	cout << "\n//Iznemam 2 elementus no rindas//" << endl;
	HumanQueue.dequeue();
	HumanQueue.dequeue();
	HumanQueue.PrintQueue();
	cout << "\n//Pievienojam elementu rindai//" << endl;
	HumanQueue.enqueue(d);
	HumanQueue.PrintQueue();
	cout << endl << endl;
	
	system("pause");
	return 0;
}
