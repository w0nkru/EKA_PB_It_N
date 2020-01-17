#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
	string time;
	int number;
	int correct = 1;
	
	cout << "Ievadiet laiku (hh:mm:ss): "; getline(cin, time);
	
	if(time.length() != 8){
		cout << "Ievadits nepareizs formats!\n\n";}
	
	else{
		for(int i = 0; i < time.length(); i++){
			number = time[i] - '0';
			
			if(i == 0){
				if(number < 0 || number > 2){
					cout << "Ievadits nepareizs laiks!\n\n";
					correct = 0;};}
				
			else if(i == 1){
				if(number < 0){
					cout << "Ievadits nepareizs laiks!\n\n";
					correct = 0;}
				
				if(time[0] - '0' == 2 && number > 3){
					cout << "Ievadits nepareizs laiks!\n\n";
					correct = 0;};}
			
			else if(i == 2 || i == 5){
				if(time[i] != ':'){
					cout << "Ievadits nepareizs formats!\n\n";
					correct = 0;};}
			
			else if(i == 3 || i == 6){
				if(number < 0 || number > 5){
					cout << "Ievadits nepareizs laiks!\n\n";
					correct = 0;};}
			
			else if(i == 4 || i == 7){
				if(number < 0){
					cout << "Ievadits nepareizs laiks!\n\n";
					correct = 0;};}
		}
		
		if(correct == 1){
			cout << "Formats un laiks ievadits pareizi!\n\n";}
		}
	
	system("Pause");
	return 0;
}
