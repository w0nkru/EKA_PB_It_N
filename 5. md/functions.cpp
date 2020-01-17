#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
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
	clientData client;

	cout << "\nIevadiet datus.\n";
	cout << "Konta numurs: "; cin >> client.accountNumber;
	cout << "Uzvards: "; cin >> client.Surname;
	cout << "Vards: "; cin >> client.Name;
	cout << "Konta bilance: "; cin >> client.balance;
	
	data.open("data.txt", ios::out | ios::app);
	
	data << client.accountNumber << ". " << client.Surname << " " << client.Name << " " << client.balance << endl;
	
	data.close();
	
	cout << "\nIeraksts pievienots!\n";
	system("Pause");
}

// Dzest ierakstu
void remove_entry(){
	string line, number;
	bool found = false;
	
	cout << "\nIevadiet konta numuru: "; cin >> number;
	
	number += ".";
	
	data.open("data.txt", ios::in);
	temp.open("temp.txt", ios::out);
	
	while(getline(data, line)){
		if(line.find(number) != string::npos){
			found = true;
			continue;}
			
		temp << line << endl;
	}
	
	data.close();
	temp.close();
	remove("data.txt");
	rename("temp.txt", "data.txt");
	
	if(found == false){
		cout << "Neeksiste tads konta numurs!\n";}
	
	else{
		cout << "Ieraksts izdzests!\n";}
	
	system("Pause");
}


// Izvadit visus ierakstus
void print_all(){
	string text;
	
	data.open("data.txt", ios::in);
	
	system("cls");
	while(getline(data, text)){
	    cout << text << endl;
	}
	
	data.close();
	
	system("Pause");
}


// Atrast ierakstu
void find_entry(){
	string line, number;
	bool found = false;
	
	cout << "\nIevadiet konta numuru: "; cin >> number;
	
	number += ".";
	
	data.open("data.txt", ios::in);
	
	while(getline(data, line)){
		if(line.find(number) != string::npos){
			cout << line << endl;
			found = true;
			break;}
	}
	
	data.close();
	
	if(found == false){
		cout << "Neeksiste tads konta numurs!\n";}
	
	system("Pause");
}


// Izmainit konta balansu
void change_balance(){
	
}


// Izvadit paradniekus
void deptors(){
	
}


// Izvadit esoso ierakstu skaitu
void count_entries(){
	int entries = 0;
	string line;
	
	data.open("data.txt", ios::in);
	
	while(getline(data, line)){
		entries++;
	}
	
	data.close();
	
	cout << "\nDatu baze ir " << entries - 1 << " ieraksti.\n";
	system("Pause");
}


// Izveidot datu bazes kopiju
void make_copy(){
	string line;
	
	data.open("data.txt", ios::in);
	data_copy.open("data_copy.txt", ios::out);
	
	while(getline(data, line)){
	    data_copy << line << endl;
	}
	
	data.close();
	data_copy.close();
	
	cout << "\nDatu bazes kopija izveidota.\n";
	system("Pause");
}
