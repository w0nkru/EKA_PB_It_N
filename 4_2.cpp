#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int MAX_TRIES=10;
int letterFill (char, string, string&);
int main ()
{
string name;
char letter;
int guesses=0;
string word;
string words[] = {"riga", "kuldiga", "jurmala", "liepaja", "daugavpils", "kandava", "ventspils", "pure", "cesis", "rezekne"};

int n=rand()% 10;
word=words[n];

string unknown(word.length(),'*'); //aizpildam vārdu ar *

        cout << "Word guessing game!\n";
        cout << "Each * represents letter count in word.\n";
        cout << "Type 1 letter by guess.\n";
        cout << "You have " << MAX_TRIES << " tries.\n";
        cout << "----------------------------------------";

    while (guesses < MAX_TRIES)
    {
        cout << "\n\n" << unknown;
        cout << "\n\nGuess a letter: ";
        cin >> letter;
// Ja pareizs, tad * aizvieto ar burtu vai kļūdas gadījumā pieliek ++
        if (letterFill(letter, word, unknown)==0)
            {
                cout << endl << "Whoops! That letter isn't in there!" << endl;
                guesses++;
            }
        else
            {
                cout << endl << "Congratz! You found one!" << endl;
            }
                cout << "You have " << MAX_TRIES - guesses;
                cout << " mistakes left." << endl;
// Pārbaude, vai uzminēts vārds
        if (word==unknown)
        {
            cout << word << endl;
            cout << "Yeah! You got it!";
            break;
        }
}
        if(guesses == MAX_TRIES)
        {
            cout << "Sorry, you lose..." << endl;
            cout << "The word was: " << word << endl;
        }
    cin.ignore();
    cin.get();
return 0;
    }

//Ņem minējumu un slepeno vārdu, aizpilda neuzminētos.
//Atgriež, cik burti uzminēti
//Atgriež 0, ja burts jau aizvietots.
int letterFill (char guess, string secretword, string &guessword)
{
    int i;
    int matches=0;
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
            matches++;
        }
    }
return matches;
}

