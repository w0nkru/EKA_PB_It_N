#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include "functions.h"
using namespace std;

fstream data;
fstream data_copy;
fstream temp;

struct clientData{
	int accountNumber;
	string Surname;
	string Name;
	float balance;
};


// Pievienot ierakstu
void add_entry(){
	bool fail = false, found = false, input = true;
	string line, number;
	clientData client;
	
	do{
		cin.clear();
		cin.ignore();
		
		system("cls");
		if(input == false){
			cout << "Nepareiza ievade!\n\n";}
		cout << "Ievadiet datus.\n";
		cout << "---------------\n";
		
		do{
			cout << "Konta numurs: "; cin >> client.accountNumber;
			
			found = false;
			number = to_string(client.accountNumber);
			
			data.open("data.txt", ios::in);
			
			if(cin.fail() == false){
				if(data.is_open()){
					while(getline(data, line)){
						if(line.find(number + ".") != string::npos){
							cout << "Konta numurs jau tiek izmantots datubaze!\n\n";
							found = true;}
					};}
				
				else{
					return;}
			}
			
			else{
				input = false;
				break;}
				
			data.close();
		}
		while(found == true);
			
		cout << "Uzvards: "; cin >> client.Surname;
		cout << "Vards: "; cin >> client.Name;
		cout << "Konta bilance: "; cin >> client.balance;
		
		if(cin.fail()){
			input = false;}
			
		else{
			input = true;}
	}
	while(cin.fail());
	
	data.close();
	data.open("data.txt", ios::out | ios::app);
	
	if(data.is_open()){
		data << client.accountNumber << ". " << client.Surname << " " << client.Name << " " << client.balance << endl;
		
		if(data.good()){
			fail = false;}
		
		else{
			fail = true;}
	}
	
	else{
		cout << "\nNeizdevas atvert datubazi!\n";}
	
	data.close();
	
	if(fail == true){
		cout << "\nRadas problemas rakstot datubazi!\n";}
	
	else{
		cout << "\nIeraksts pievienots!\n";}
	
	system("Pause");
}

// Dzest ierakstu
void remove_entry(){
	bool fail = false, found = false;
	string line, number;
	
	cout << "\nIevadiet konta numuru: "; cin >> number;
	
	number += ".";
	
	data.open("data.txt", ios::in);
	temp.open("temp.txt", ios::out);
	
	if(data.is_open() && temp.is_open()){
		while(getline(data, line)){
			if(data.good()){
				if(line.find(number) != string::npos){
					found = true;
					continue;};}
			
			else{
				fail = true;
				break;}
				
			temp << line << endl;
			
			if(temp.good()){
				continue;}
			
			else{
				fail = true;
				break;}
		}
		
		data.close();
		temp.close();
		remove("data.txt");
		rename("temp.txt", "data.txt");
	}
	
	else{
		data.close();
		temp.close();
		cout << "\nNeizdevas atvert datubazi!\n";}
	
	if(fail == true){
		cout << "Radas problemas lasto/rakstot datubazi!\n";}
	
	if(found == false){
		cout << "Neeksiste tads konta numurs!\n";}
	
	else{
		cout << "Ieraksts izdzests!\n";}
	
	system("Pause");
}


// Izvadit visus ierakstus
void print_all(){
	bool fail = false;
	string text;
	
	system("cls");
	
	data.open("data.txt", ios::in);
	
	if(data.is_open()){
		while(getline(data, text)){
			if(data.good()){
		    	cout << text << endl;
				continue;}
			
			else{
				fail = true;
				break;}
		}
	}
	
	else{
		cout << "\nNeizdevas atvert datubazi!\n";}
	
	data.close();
	
	if(fail == true){
		cout << "\nRadas problemas lasto datubazi!\n";}
	
	system("Pause");
}


// Atrast ierakstu
void find_entry(){
	bool fail = false, found = false;
	string line, number;
	
	cout << "\nIevadiet konta numuru: "; cin >> number;
	
	number += ".";
	
	data.open("data.txt", ios::in);
	
	if(data.is_open()){
		while(getline(data, line)){
			if(data.good()){
				if(line.find(number) != string::npos){
					cout << line << endl;
					found = true;
					break;};}
			
			else{
				fail = true;
				break;}
		}
	}
	
	else{
		cout << "\nNeizdevas atvert datubazi!\n";}
	
	data.close();
	
	if(fail == true){
		cout << "Radas problemas lasto datubazi!\n";}
	
	else if(found == false){
		cout << "Neeksiste tads konta numurs!\n";}
	
	system("Pause");
}


// Izmainit konta balansu
void change_balance(){
	
}


// Izvadit paradniekus
void deptors(){
	bool fail = false, found = false;
	int index;
	string line;
	
	system("cls");
	
	data.open("data.txt", ios::in);
	
	if(data.is_open()){
		while(getline(data, line)){
			if(data.good()){
				if(line.find("-") != string::npos){
					found = true;
					cout << line << endl;};}
			
			else{
				fail = true;
				break;}
		}
	}
	
	else{
		cout << "Neizdevas atvert datubazi!\n";}
	
	data.close();
	
	if(fail == true){
		cout << "Radas problemas lasto datubazi!\n";}
	
	if(found == false){
		cout << "Datu baze nav ieraksti ar negativu bilanci.\n";}
	
	system("Pause");
}


// Izvadit esoso ierakstu skaitu
void count_entries(){
	bool fail = false;
	int entries = 0;
	string line;
	
	data.open("data.txt", ios::in);
	
	if(data.is_open()){
		while(getline(data, line)){
			if(data.good()){
				entries++;}
			
			else{
				fail = true;
				break;}
		}
	}
	
	else{
		cout << "\nNeizdevas atvert datubazi!\n";}
	
	data.close();
	
	if(fail == true){
		cout << "/nRadas problemas lasto datubazi!\n";}
	
	else{
		cout << "\nDatu baze ir " << entries << " ieraksti.\n";}
	
	system("Pause");
}


// Izveidot datu bazes kopiju
void make_copy(){
	bool fail = false;
	string line;
	
	data.open("data.txt", ios::in);
	data_copy.open("data_copy.txt", ios::out);
	
	if(data.is_open() && data_copy.is_open()){
		while(getline(data, line)){
			if(data.good()){
		    	data_copy << line << endl;}
		    
		    else{
				fail = true;
				break;}
		    
		    if(data_copy.good()){
				continue;}
			
			else{
				fail = true;
				break;}
		}
	}
	
	else{
		cout << "\nNeizdevas atvert datubazi!\n";}
	
	data.close();
	data_copy.close();
	
	if(fail == true){
		cout << "/nRadas problemas lasto/rakstot datubazi!\n";}
	
	else{
		cout << "\nDatu bazes kopija izveidota.\n";}
	
	system("Pause");
}
