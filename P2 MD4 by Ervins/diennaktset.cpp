#include <iostream>
#include <ctime>
#include "diennaktset.h"
using namespace std;


DiennaktsET::DiennaktsET(int d){
	if(d > 0){
		activated = true;
		activation_date = d;}
	
	else{
		activated = false;
		activation_date = d;}
}


void DiennaktsET::Print() const{
	if(activated == true){
		cout << "Aktivizets: ja, Aktivizacijas datums: " << activation_date << endl;}
	
	else{
		cout << "Aktivizets: ne" << endl;}
}


void DiennaktsET::Use(){
	time_t t = time(NULL);
	tm* date = localtime(&t);
	
	if(activated == false){
		activated = true;
		activation_date = date->tm_mday;}
	
	else{
		cout << "E-Talona deriguma statuss: ";
		
		if(date->tm_mday - activation_date > 1 || date->tm_mday - activation_date < -1){
			cout << "sarkans" << endl;}
		
		else{
			cout << "zals" << endl;}
	}
}
