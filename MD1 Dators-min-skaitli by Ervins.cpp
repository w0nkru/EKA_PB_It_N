#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	time_t t;
	srand((unsigned) time(&t));
	int x = rand() % 100;
	int i = 1, j = 0, n, m;
	int low = 0, high = 101;
	
	cout << "Iedomajaties skaitli intervala no 0 - 100!\n";
	
	do{
		cout << "\nVai sis ir jusu skaitlis? '" << x << "'\n[0] - ne, [1] - ja : "; 
		cin >> n;
		j++;
		
		if(n == 1){
			cout << "\nSkaitlis uzminets ar " << j << ". meginajumu!\n\n";
			break;}
		
		cout << "Skaitlis ir mazaks vai lielaks par '" << (low + high) / 2 << "'\n";
		cout <<  "[0] - mazaks, [1] - lielaks : ";
		cin >> m;
		
		if(m == 0){
			high = (low + high) / 2;
			x = (low + high) / 2;}
		else{
			low = (low + high) / 2;
			x = (low + high) / 2;}}
	while(i>0);
	
	system("Pause");
	return 0;
}
