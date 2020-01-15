#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
		cout << "----------Spele - uzmini skaitli no 1 - 100------- " << endl;
		cout << "Speles noteikumi: \n" << endl;
		cout << "	Ir jaatmin skaitlis no 1 - 100. Ir doti 10 meginajumi. " << endl;
		cout << "	Pec katra meginajuma tiks dots informativs pazinojums par atlikusajam reizem! " << endl;
	int rnd; //rnd = random skaitlis
		srand(time(0));
		rnd = rand() % 100 + 1;
	int atm, meg=10; //atm= minamais skaitlis, meg = meginajumu skaits
		cout << "Izvelies skaitli ";
do 
{
		cout << rnd << endl;
		cin >> atm;
		meg--;
	if (atm < rnd)
		cout << "Skaitlis ir lielaks par ievadito! Atlikusias meginajumu skaits : " << meg << endl;	
	if (atm > rnd)
		cout << "Skaitlis ir mazaks par ievadito! Atlikusais meginajumu skaits : " << meg << endl;		 
} 
while ((meg != 0) && (atm!=rnd));
	if (atm==rnd)
		cout << "Skaitlis uzminets no " <<  10-meg << ". meginajuma!" << endl;
	else
		cout << "Jus zaudejat! Pareiza atbilde  " << rnd << "!" << endl;	
	system("PAUSE");
	return 0;

}
