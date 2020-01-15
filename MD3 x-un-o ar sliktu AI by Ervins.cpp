#include <iostream>
using namespace std;



// Uzvaretaja parbaude
int winner(string A[10]){
	// 1., 2. un 3. linijas parbaude
	if((A[0] == A[1]) && (A[0] == A[2]))
		return 1;
	else if((A[3] == A[4]) && (A[3] == A[5]))
		return 1;
	else if((A[6] == A[7]) && (A[6] == A[8]))
		return 1;
	
	// 1., 2. un 3. kolonnas parbaude
	else if((A[0] == A[3]) && (A[0] == A[6]))
		return 1;
	else if((A[1] == A[4]) && (A[1] == A[7]))
		return 1;
	else if((A[2] == A[5]) && (A[2] == A[8]))
		return 1;
	
	// Diognalu parbaude
	else if((A[0] == A[4]) && (A[0] == A[8]))
		return 1;
	else if((A[2] == A[4]) && (A[2] == A[6]))
		return 1;
	else
		return 0;}



// Speles laukums
int board(int O, int X, int clear){
	system("cls");
	static string A[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
	
	if(clear == 1){
		A[0] = "1";
		A[1] = "2";
		A[2] = "3";
		A[3] = "4";
		A[4] = "5";
		A[5] = "6";
		A[6] = "7";
		A[7] = "8";
		A[8] = "9";
		A[9] = "0";
		return 0;}
	else{
		A[O - 1] = "O";
		A[X - 1] = "X";}
	
	cout << "Spele 'Krustini un Nullisi'\n";
	cout << "Speletajs 1 (O)   Speletajs 2 (X)";
	cout << "\n\n\n";
	cout << "\t " << A[0] << " | " << A[1] << " | " << A[2] << endl;
	cout << "\t-----------" << endl;
	cout << "\t " << A[3] << " | " << A[4] << " | " << A[5] << endl;
	cout << "\t-----------" << endl;
	cout << "\t " << A[6] << " | " << A[7] << " | " << A[8] << endl;
	cout << "\n\n\n";
	
	if(winner(A))
		return 1;
	
	return 0;}



// Cilveks pret cilveku
void human(){
	int j = 0, k = 0, n, O, X;
	int C[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	do{
		system("cls");
		cout << "Spele 'Krustini un Nullisi'\n";
		cout << "Speletajs 1 (O)   Speletajs 2 (X)";
		cout << "\n\n\n";
		cout << "\t 1 | 2 | 3 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 4 | 5 | 6 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 7 | 8 | 9 " << endl;
		cout << "\n\n\n";
		
		
		for(int i = 0; i <= 4; i++){
			do{
				cout << "1. speletajs izvelas, kur ielikt 'O': "; cin >> O;
				if(C[O - 1] == 0){
					C[O - 1] = 1;
					break;}
				else
					cout << "Nepareiza ievade! Laucins jau ir aiznemts, megini velreiz!\n";}
			while(k < 1);
				
				
			if(board(O, 10, 0)){
				cout << "1. speletajs ir uzvarejis!" << endl;
				break;}
			
			if(i == 4){
				cout << "Neizskirts!\n";
				break;}
			
			do{
				cout << "2. speletajs izvelas, kur ielikt 'X': "; cin >> X;
				if(C[X - 1] == 0){
					C[X - 1] = 1;
					break;}
				else
					cout << "Nepareiza ievade! Laucins jau ir aiznemts, megini velreiz!\n";}
			while(k < 1);
			
			
			if(board(10, X, 0)){
				cout << "2. speletajs ir uzvarejis!" << endl;
				break;};}
		
		
		cout << "Vai velaties uzspelet velreiz? [0] - ne, [1] - ja : "; cin >> n;
		switch(n){
			case 0:
				j++;
				break;
			case 1:
				board(10, 10, 1);
				C[0] = 0;
				C[1] = 0;
				C[2] = 0;
				C[3] = 0;
				C[4] = 0;
				C[5] = 0;
				C[6] = 0;
				C[7] = 0;
				C[8] = 0;
				break;
			default:
				cout << "Nepareiza ievade!\n";
				j++;
				break;}}
	while(j < 1);}



// AI Logika
int logic(int O, int clear){
	int X;
	static int B[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	if(clear == 1){
		B[0] = 0;
		B[1] = 0;
		B[2] = 0;
		B[3] = 0;
		B[4] = 0;
		B[5] = 0;
		B[6] = 0;
		B[7] = 0;
		B[8] = 0;
		return 0;}
	else
		B[O - 1] = 1;
	
	// Kreisais augsejais sturis
	if(B[0] == 1 && B[1] == 0){
		B[1] = 2;
		return X = 2;}
	else if(B[0] == 1 && B[3] == 0){
		B[3] = 2;
		return X = 4;}
	
	// 1. rindas videjais lauks
	else if(B[1] == 1 && B[0] == 0){
		B[0] = 2;
		return X = 1;}
	else if(B[1] == 1 && B[2] == 0){
		B[2] = 2;
		return X = 3;}
	else if(B[1] == 1 && B[4] == 0){
		B[4] = 2;
		return X = 5;}
	
	// Labais augsejais sturis
	else if(B[2] == 1 && B[1] == 0){
		B[1] = 2;
		return X = 2;}
	else if(B[2] == 1 && B[5] == 0){
		B[5] = 2;
		return X = 6;}
	
	// 2. rindas kreisais lauks
	else if(B[3] == 1 && B[4] == 0){
		B[4] = 2;
		return X = 5;}
	else if(B[3] == 1 && B[0] == 0){
		B[0] = 2;
		return X = 1;}
	else if(B[3] == 1 && B[6] == 0){
		B[6] = 2;
		return X = 7;}
	
	// 2. rindas vidus
	else if(B[4] == 1 && B[3] == 0){
		B[3] = 2;
		return X = 4;}
	else if(B[4] == 1 && B[5] == 0){
		B[5] = 2;
		return X = 6;}
	else if(B[4] == 1 && B[1] == 0){
		B[1] = 2;
		return X = 2;}
	else if(B[4] == 1 && B[7] == 0){
		B[7] = 2;
		return X = 8;}
	
	// 2. rindas labais lauks
	else if(B[5] == 1 && B[4] == 0){
		B[4] = 2;
		return X = 5;}
	else if(B[5] == 1 && B[2] == 0){
		B[2] = 2;
		return X = 3;}
	else if(B[5] == 1 && B[8] == 0){
		B[8] = 2;
		return X = 9;}
	
	// Kreisais apaksejais sturis
	else if(B[6] == 1 && B[7] == 0){
		B[7] = 2;
		return X = 8;}
	else if(B[6] == 1 && B[3] == 0){
		B[3] = 2;
		return X = 4;}
	
	// 3. rindas vidus
	else if(B[7] == 1 && B[6] == 0){
		B[6] = 2;
		return X = 7;}
	else if(B[7] == 1 && B[8] == 0){
		B[8] = 2;
		return X = 9;}
	else if(B[7] == 1 && B[4] == 0){
		B[4] = 2;
		return X = 5;}
	
	// Labais apaksejais sturis
	else if(B[8] == 1 && B[7] == 0){
		B[7] = 2;
		return X = 8;}
	else if(B[8] == 1 && B[5] == 0){
		B[5] = 2;
		return X = 6;}}



// Pret datoru
void ai(){
	int j = 0, k = 0, n, O, X;
	int C[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	do{
		system("cls");
		cout << "Spele 'Krustini un Nullisi'\n";
		cout << "Speletajs 1 (O)   Speletajs 2 (X)";
		cout << "\n\n\n";
		cout << "\t 1 | 2 | 3 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 4 | 5 | 6 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 7 | 8 | 9 " << endl;
		cout << "\n\n\n";
		
		
		for(int i = 0; i <= 4; i++){
			do{
				cout << "1. speletajs izvelas, kur ielikt 'O': "; cin >> O;
				if(C[O - 1] == 0){
					C[O - 1] = 1;
					break;}
				else
					cout << "Nepareiza ievade! Laucins jau ir aiznemts, megini velreiz!\n";}
			while(k < 1);
			
			
			if(board(O, 10, 0)){
				cout << "Cilveks ir uzvarejis!" << endl;
				break;}
			
			if(i == 4){
				cout << "Neizskirts!\n";
				break;}
			
			
			X = logic(O, 0);
			C[X - 1] = 1;
			
			if(board(10, X, 0)){
				cout << "Dators ir uzvarejis!" << endl;
				break;};}
		
		
		cout << "Vai velaties uzspelet velreiz? [0] - ne, [1] - ja : "; cin >> n;
		switch(n){
			case 0:
				j++;
				break;
			case 1:
				board(10, 10, 1);
				logic(10, 1);
				C[0] = 0;
				C[1] = 0;
				C[2] = 0;
				C[3] = 0;
				C[4] = 0;
				C[5] = 0;
				C[6] = 0;
				C[7] = 0;
				C[8] = 0;
				break;
			default:
				cout << "Nepareiza ievade!\n";
				j++;
				break;}}
	while(j < 1);}



int main(){
	int a;
	cout << "Spele 'Krustini un Nullisi'\n";
	cout << "Vai velaties spelet pret datoru vai cilveks pret cilveku?\nCilveks pret cilveku [0], pret datoru [1] : "; cin >> a;
	
	switch(a){
		case 0:
			human();
			break;
		case 1:
			ai();
			break;
		default:
			cout << "Nepareiza ievade!\n";
			break;}

	system("Pause");
	return 0;}
