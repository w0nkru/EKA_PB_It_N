#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctime>
#include <conio.h>
using namespace std;


// Varda minesana //
int guessing(string words[], int random_word){
	string word = words[random_word];
	
	// Parveido string word uz char
	char word_char[word.length() + 1];
	copy(word.begin(), word.end(), word_char);
	word_char[word.length()] = '\0';
	
	// Zvaigznisu lauks, kur notiek ievade un izmantotie burti
	char empty[word.length() + 1];
	empty[word.length()] = '\0';
	char guess = ' ';
	
	// Punkti, uzminetie vardi u.c.
	static int points = 0;
	static int guessed_words = 0;
	
	// Aizpilda zvaigznisu lauku ar zvaigznem
	for(int i = 0; i < word.length(); i++){
		empty[i] = '*';
	}
	
	
	for(points; points < 10;){
		system("cls");
		cout << "Spele 'Vardu minesana'\n";
		cout << "Tema - augli\n\n";
		cout << "Lai izbeigtu speli, ievadiet '0'!\n";
		if(guessed_words > 0){
			cout << "Uzmineti vardi: " << guessed_words << endl;}
		cout << "Soda punkti: " << points << endl;
		cout << "Izveletais vards: ";
		
		// Zvaignisu izvade
		for(int i = 0; empty[i] != '\0'; i++){
			cout << empty[i] << " ";
		}
		
		// Ievade
		cout << endl;
		cout << "Burta minesana: ";
		guess = getch();
		
		if(guess == '0'){
			return 1;}
		
		// Burta parbaude un zvaignisu aizvietosana
		for(int i = 0; word_char[i] != '\0'; i++){
			if(guess == word_char[i]){
				empty[i] = guess;}
		}
		
		// Soda punkti
		if(strchr(word_char, guess) == NULL){
			points++;
			cout << "Varda nav tada burta!\n";
			system("Pause");}
		
		// Parbauda vai vards ir uzminets un punktu nonemsana
		if(strcmp(word_char, empty) == 0){
			guessed_words++;

			if(points < 5){
				points = 0;
				return 0;}

			else{
				points -= 5;
				return 0;};}
	}
}


// Vardu masivs un varda izvele ar generatora palidzibu //
void game(){
	for(int i = 0; i < 20; i++){
		string words[20] = {"abols", "ananass", "apelsins", "avokado", "banans",
							"bumbieris", "citrons", "cidonija", "durians", "granatabols",
							"greipfruts", "kivi", "kirsis", "laims", "mandarins",
							"mango", "melone", "persiks", "plume", "zemene"};
		time_t t;
		srand((unsigned) time(&t));
		static int used_words[20];
		static int guessed_words = 0;
		int random_word;
		int end = 0;
		
		for(int j = 0; j < 1;){
			random_word = rand() % 20;
			
			for(int k = 0; k < 20;){
				if(used_words[k] != random_word){
					k++;
					if(k == 20){
						j++;};}
				else{
					break;}
			}
		}
		
		used_words[i] = random_word;
		
		end = guessing(words, random_word);
		
		if(end == 1){
			system("cls");
			cout << "Spele beigusies!\n";
			cout << "Jus uzminejat " << guessed_words << " vardus!\n\n";
			break;}
		else{
			guessed_words++;}
		
		if(i == 19){
			system("cls");
			cout << "Spele beigusies!\n";
			cout << "Jus uzminejat visus vardus!\n\n";}
	}
}


int main(){
	cout << "Spele 'Vardu minesana'\n\n";
	cout << "Noteikumi:\n";
	cout << "1. Dators izvelesies vardu no vardu masiva un aizstas to ar zvaigznitem (*).\n";
	cout << "2. Lai uzzvaretu speli ir jauzmin pareizi visi vardi.\n";
	cout << "3. Minesana notiek pa 1 burtam, neparieizi uzminets burts = 1 soda punkts.\n   Mazie burti bez garumzimem un mikstinajuma zimem.\n";
	cout << "4. Spele turpinas lidz nav savakti 10 soda punkti vai lidz netiek ievadits '0', lai izbeigtu speli.\n";
	cout << "5. Pareizi uzminets vards = -5 soda punkti.\n\n";
	
	system("Pause");
	game();
	
	system("Pause");
	return 0;
}
