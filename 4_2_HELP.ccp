#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int gameover=10;
int points = 0;
int letterFill (char, string, string&);

int guessing ()
{
    string name;
    char letter;
    int punkti = 0;
    int guessed_words = 0;
    string word;
   
    string unknown(word.length(),'*'); //aizpildam vārdu ar *
    
    while (punkti < gameover)
    {
        cout << "\n\n" << unknown;
        cout << "\nGuess a letter: ";
        cin >> letter;
        if(guessed_words > 0){
        cout << "Guessed words so far: " << guessed_words << endl;}
// Ja pareizs, tad * aizvieto ar burtu vai kļūdas gadījumā pieliek ++
        if (letterFill(letter, word, unknown)==0)
            {
                cout << endl << "Whoops! That letter isn't in there!" << endl;
                punkti++;
            }
        else
            {
                cout << endl << "Congratz! You found one!" << endl;
            }
                    cout << "You have " << punkti;
                    cout << "/10 points!" << endl;
// Pārbaude, vai uzminēts vārds
        if (word==unknown)
        {
            guessed_words++;
            
            cout << "Yeah! You got it!";
            cout << "Asnwer was" << word;
            if(punkti < 5){
                punkti = 0;
                return 0;}
            else{
                punkti -= 5;
                return 0;}
            break;
        }
}
        if(punkti == gameover)
        {
            cout << "Sorry, you lose..." << endl;
            cout << "The word was: " << word << endl;
        }
    cin.ignore();
    cin.get();
return 0;
}

void game ()
{
    string name;
    char letter;
    int punkti=0;
    string word;
    string words[] = {"riga", "daugavpils", "liepaja", "jelgava", "jurmala", "ventspils", "rezekne", "valmiera",
                                             "ogre", "jekabpils", "salaspils", "tukums", "cesis", "sigulda",
                                             "olaine", "kuldiga", "saldus", "talsi", "dobele"};

    time_t t;
    srand((unsigned) time(&t));
    
    for(int j = 0; j < 1;){
    int n=rand()% 20;
    word=words[n];

    string unknown(word.length(),'*'); //aizpildam vārdu ar *

    while (punkti < gameover)
    {
        cout << "\n\n" << unknown;
        cout << "\nGuess a letter: ";
        cin >> letter;
// Ja pareizs, tad * aizvieto ar burtu vai kļūdas gadījumā pieliek sodu
        if (letterFill(letter, word, unknown)==0)
            {
                cout << endl << "Whoops! That letter isn't in there!" << endl;
                punkti++;
            }
        else
            {
                cout << endl << "Congratz! You found one!" << endl;
            }
                    cout << "You have " << punkti;
                    cout << "/10 points!" << endl;
        }
    }
}
//Ņem minējumu un slepeno vārdu, aizpilda neuzminētos.
//Atgriež, cik burti uzminēti
//Atgriež 0, ja burts jau aizvietots.
int letterFill (char guess, string secretword, string &guessword)
{
    int i;
    int guessed_words=0;
    int len=secretword.length();
    for (i = 0; i< len; i++)
    {
//Vai sakrīt minējums iepriekšējā gājienā
        if (guess == guessword[i])
        return 0;
//Vai minējums ir slepenajā vārdā
        if (guess == secretword[i])
        {
            guessword[i] = guess;
            guessed_words++;
        }
    }
    return guessed_words;
}
    
int main ()
{
            cout << "Word guessing game!\n";
            cout << "Each * represents letter count in word.\n";
            cout << "Type 1 letter by guess.\n";
            cout << "For each wrong guess You get 1 point. 10 points and your game ends.\n";
            cout << "----------------------------------------";
    game();
    return 0;
}

