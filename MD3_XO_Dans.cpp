#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int lauk[9] = {0,0,0,0,0,0,0,0,0};
/*___________________________________Parbaude vai kads uzvar_____________________________________________*/
int parb(){
//pirmais speletajs
	if 		(lauk [0] + lauk [1] + lauk [2] == 3)
	return 1;
	else if (lauk [3] + lauk [4] + lauk [5] == 3)
	return 1;
	else if (lauk [6] + lauk [7] + lauk [8] == 3)
	return 1;
	else if (lauk [0] + lauk [3] + lauk [6] == 3)
	return 1;
	else if (lauk [1] + lauk [4] + lauk [7] == 3)
	return 1;
	else if (lauk [2] + lauk [5] + lauk [8] == 3)
	return 1;
	else if (lauk [0] + lauk [4] + lauk [8] == 3)
	return 1;
	else if (lauk [6] + lauk [4] + lauk [2] == 3)
	return 1;
//otrs speletajs	
	else if (lauk [0] + lauk [1] + lauk [2] == -3)
	return 2;
	else if (lauk [3] + lauk [4] + lauk [5] == -3)
	return 2;
	else if (lauk [6] + lauk [7] + lauk [8] == -3)
	return 2;
	else if (lauk [0] + lauk [3] + lauk [6] == -3)
	return 2;
	else if (lauk [1] + lauk [4] + lauk [7] == -3)
	return 2;
	else if (lauk [2] + lauk [5] + lauk [8] == -3)
	return 2;
	else if (lauk [0] + lauk [4] + lauk [8] == -3)
	return 2;
	else if (lauk [6] + lauk [4] + lauk [2] == -3)
	return 2;
//turpinam speli	
	else
	return 0;
}

/*____________________________________________AIlaukuma lasisana___________________________________________*/
int ai(){
//Offensive	
	if		(lauk [0] + lauk [1] + lauk [2] == -2)
	return -1;
	else if (lauk [3] + lauk [4] + lauk [5] == -2)
	return -2;
	else if (lauk [6] + lauk [7] + lauk [8] == -2)
	return -3;
	else if (lauk [0] + lauk [3] + lauk [6] == -2)
	return -4;
	else if (lauk [1] + lauk [4] + lauk [7] == -2)
	return -5;
	else if (lauk [2] + lauk [5] + lauk [8] == -2)
	return -6;
	else if (lauk [0] + lauk [4] + lauk [8] == -2)
	return -7;
	else if (lauk [6] + lauk [4] + lauk [2] == -2)
	return -8;
//Defensive	
	else if (lauk [0] + lauk [1] + lauk [2] == 2)
	return 1;
	else if (lauk [3] + lauk [4] + lauk [5] == 2)
	return 2;
	else if (lauk [6] + lauk [7] + lauk [8] == 2)
	return 3;
	else if (lauk [0] + lauk [3] + lauk [6] == 2)
	return 4;
	else if (lauk [1] + lauk [4] + lauk [7] == 2)
	return 5;
	else if (lauk [2] + lauk [5] + lauk [8] == 2)
	return 6;
	else if (lauk [0] + lauk [4] + lauk [8] == 2)
	return 7;
	else if (lauk [6] + lauk [4] + lauk [2] == 2)
	return 8;
//Random	
	else
	return 0;
}
/*___________________________________________Ai logika_______________________________*/
int ailog(int &masv){
	
	srand(time(0)); 
	
	masv = ai();
	if 		(masv == 1 || masv == -1){
		if (lauk[0] == 0)
		return 0;
		else if (lauk[1] == 0)
		return 1;
		else return 3;
	}
	else if	(masv == 2 || masv == -2){
		if (lauk[3] == 0)
		return 3;
		else if (lauk[4] == 0)
		return 4;
		else return 5;
	}
	else if	(masv == 3 || masv == -3){
		if (lauk[6] == 0)
		return 6;
		else if (lauk[7] == 0)
		return 7;
		else return 8;
	}
	else if	(masv == 4 || masv == -4){
		if (lauk[0] == 0)
		return 0;
		else if (lauk[3] == 0)
		return 3;
		else return 6;
	}
	else if	(masv == 5 || masv == -5){
		if (lauk[1] == 0)
		return 1;
		else if (lauk[4] == 0)
		return 4;
		else return 7;
	}
	else if	(masv == 6 || masv == -6){
		if (lauk[2] == 0)
		return 2;
		else if (lauk[5] == 0)
		return 5;
		else return 8;
	}
	else if	(masv == 7 || masv == -7){
		if (lauk[0] == 0)
		return 0;
		else if (lauk[4] == 0)
		return 4;
		else return 8;
	}
	else if	(masv == 8 || masv == -8){
		if (lauk[6] == 0)
		return 6;
		else if (lauk[4] == 0)
		return 4;
		else return 2;
	}

	else {
		do{
			masv = rand() % 10;
		}while (lauk[masv] != 0);
		return masv;
	}
}


/*___________________________________________Zime Laukumu______________________________________*/
void laukums(){
	cout << "-------------" << endl;
	for(int i=1;i<10;i++){
		if(lauk[i-1] == -1){
			cout<< "| O " ;
		if (i == 3 || i== 6 || i==9)
			cout << "|\n-------------" << endl; 
		}
		else if (lauk[i-1] == 1){
			cout<< "| X " ;
		if (i == 3 || i== 6 || i==9)
			cout << "|\n-------------" << endl;
		}
		else {
			cout<< "| " << i << " " ;
		if (i == 3 || i== 6 || i==9)
			cout << "|\n-------------" << endl;
		} 
			
	}
}
/*_____________________________________PVP_______________________________________*/
int pvp(){
	int sp1 = 1, sp2 = -1, gaj, sp = 1, la = 1, rez;
	char r;
	for (gaj = 0; gaj < 9; gaj++){
		cout << "Iet " << sp << ". speletajs : " ; cin >> la;
	
	//parbaude vai nav aiznemts un ievadit pareizo
		if (lauk[la-1] != 0){
		do {
			cout << "Nepareiza ievade ludzu ievadit brivo laukumu" << endl;
			cin >> la;
		}while (lauk[la-1] != 0);
		}
	
	//ievade matrica	
		if (sp == 1){
			lauk[la-1] = sp1;
		}
		else{
			lauk[la-1] = sp2;
		}
		
		
	//zime laukumu	
		laukums();
	//parbauda uzveretaju
		rez = parb();
		
		if (rez == 1){
			cout << "Uzvar pirmais speletajs\nJa velaties spelet velreiz rakstiet [R]\n\n\n" << endl;
			cin >> r;
			if(r == 'r' || r == 'R'){
			for(int i=0;i<9;i++)
				lauk[i] = 0;
			pvp();
			}
			else{
			system("Pause");
			return 0;	
			}}
			
		else if (rez == 2){
			cout << "Uzvar otrais speletajs\nJa velaties spelet velreiz rakstiet [R]\n\n\n" << endl;
			cin >> r;
			if(r == 'r' || r == 'R'){
			for(int i=0;i<9;i++)
				lauk[i] = 0;
			pvp();
			}
			else{
			system("Pause");
			return 0;	
			}}
			
		if (gaj == 8){
			cout << "Neizskirts\nJa velaties spelet velreiz rakstiet [R]\n\n\n" << endl;
			cin >> r;
			if(r == 'r' || r == 'R'){
			for(int i=0;i<9;i++)
				lauk[i] = 0;
			pvp();
			}
			else{
			system("Pause");
			return 0;	
			}}
			
		else{
		if (sp == 1)
			sp = 2;
		else
			sp = 1;
		}
		

	}		
}
/*_____________________________________________________PvAI________________________________________________________*/
int pvai(){
	int sp1 = 1, sp2 = -1, gaj, sp = 1, la = 0, rez, masv;
	char r;
	
	for (gaj = 0; gaj < 9; gaj++){
		if(sp == 1){
			cout << "Iet 1. speletajs : " ; cin >> la;
			if (lauk[la-1] != 0){
/*parbaude vai nav aiznemta vieta*/
			do {
				cout << "Nepareiza ievade ludzu ievadit brivo laukumu" << endl;
				cin >> la;
			}while (lauk[la-1] != 0);
	}
}
		
	

//ievade matrica
	//speletajs 1______________________________________	
	if (sp == 1){
		lauk[la-1] = sp1;
	}
	//AI______________________________________________
	else {
		masv = ailog(masv);
		lauk[masv] = sp2;
	}
	//zime laukumu	
		laukums();
	//parbauda uzveretaju
		rez = parb();
		
	if (rez == 1){
		cout << "Uzvar speletajs\nJa velaties spelet velreiz rakstiet [R]\n\n\n" << endl;
		cin >> r;
		if(r == 'r' || r == 'R'){
		for(int i=0;i<9;i++)
			lauk[i] = 0;
		pvai();
		}
		else{
		system("Pause");
		return 0;	
		}}
		
	else if (rez == 2){
		cout << "Uzvar dators\nJa velaties spelet velreiz rakstiet [R]\n\n\n" << endl;
		cin >> r;
		if(r == 'r' || r == 'R'){
		for(int i=0;i<9;i++)
			lauk[i] = 0;
		pvai();
		}
		else{
		system("Pause");
		return 0;	
		}}
			
	if (gaj == 8){
		cout << "Neizskirts\nJa velaties spelet velreiz rakstiet [R]\n\n\n" << endl;
		cin >> r;
		if(r == 'r' || r == 'R'){
		for(int i=0;i<9;i++)
			lauk[i] = 0;
		pvai();
		}
		else{
		system("Pause");
		return 0;	
		}}
		
	else{
	if (sp == 1)
		sp = 2;
	else
		sp = 1;
	}
	
	}
}
/*______________________________________________MAIN____________________________________________*/
int main(){
	int gmode = 2;
	char r;
	cout << "Krustini un aplisi.\n\nIevade notiek ar skaitla ievadi attiecigajam laukumam\n\n" ;
	cout << "-------------" << endl;
	cout << "| 1 | 2 | 3 |" << endl;
	cout << "-------------" << endl;
	cout << "| 4 | 5 | 6 |" << endl;
	cout << "-------------" << endl;
	cout << "| 7 | 8 | 9 |" << endl;
	cout << "-------------\n\n" << endl;
	cout << "Izvelieties vai spelesiet pret citu speletaju(2) vai datoru(1)" << endl;
	cin >> gmode ;
	if(gmode == 2){
		pvp();
	}
	else if(gmode == 1){
		pvai();
	}
	else{
		do {
		cout << "Nepareiza ievade, ludzu ievadiet 1 vai 2 : " ;
		cin >> gmode ;
		}while (gmode != 2 && gmode != 1);
	if(gmode == 2){
		pvp();
	}
	else if(gmode == 1){
		pvai();
	}}
	system("Pause");
	return 0;
}
