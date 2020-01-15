#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	time_t t;
	srand((unsigned) time(&t));
	int x = rand() % 100, i = 10, j = 0, n;
	
	cout << "Programma ir generejusi skaitli robeza no 0 - 100.\n";
	cout << "Jums jauzmin programmas skaitlis 10 meginajumos!\n\n";
	
	do{
		cout << "Atlikuso meginajumu skaits: " << i << "\n";
		cout << "Minat skaitli: ";
		cin >> n;
		
		if(n == x){
			cout << "\nSkaitlis uzminets ar " << j << ". meginajumu!\nJus uzvarejat!\n\n";
			break;}
		else if(x > n){
			cout << "Skaitlis ir lielaks par ievadito!\n\n";
			j++;
			i--;}
		else{
			cout << "Skaitlis ir mazaks par ievadito!\n\n";
			j++;
			i--;}}
	while(i > 0);
	
	if(j >= 10){
		cout << "Atlikuso meginajumu skaits: " << i << "\n";
		cout << "Jus zaudejat! Pareiza atbilde: '"<< x << "'\n\n";}
	
	system("Pause");
	return 0;
}
