#include <iostream>
#include "functions.h"
using namespace std;

int main(){
	int menu = 0;
	
	do{
		system("cls");
		cout << "\tGalvena izvelne\n";
		cout << "--------------------------------\n";
		cout << "[1] Pievienot ierakstu.\n";
		cout << "[2] Dzest ierakstu.\n";
		cout << "[3] Izvadit visus ierakstus.\n";
		cout << "[4] Atrast ierakstu.\n";
		cout << "[5] Izmainit konta balansu.\n";
		cout << "[6] Izvadit paradniekus.\n";
		cout << "[7] Saskaitit ierakstus.\n";
		cout << "[8] Izveidot datu bazes kopiju.\n";
		cout << "[9] Iziet.\n";
		
		for(int i = 0; i != 1;){
			cout << "Izvele: "; cin >> menu;
			
			switch(menu){
				case 1: add_entry();
						i++;
						break;
						
				case 2: remove_entry();
						i++;
						break;
						
				case 3: print_all();
						i++;
						break;
						
				case 4: find_entry();
						i++;
						break;
						
				case 5: change_balance();
						i++;
						break;
						
				case 6: deptors();
						i++;
						break;
						
				case 7: count_entries();
						i++;
						break;
						
				case 8: make_copy();
						i++;
						break;
				
				case 9: i++;
						cout << endl;
						break;
					
				default: cout << "Nepareiza ievade!\n";
						 break;
			}
		}
	}
	while(menu != 9);
	
	system("Pause");
	return 0;
}
