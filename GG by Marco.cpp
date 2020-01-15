//
//  main.cpp
//  GuessingGame
//
//  Created by Marco Romanovskis on 11/11/2019.
//  Copyright © 2019 Marco Romanovskis. All rights reserved.
// 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()  {
play:
int GuessNumber = 0, RandomNumber, Guesses = 0;
char response;

srand( (unsigned int) time(NULL));
RandomNumber = rand() % 100 + 1;
    
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
        cout << "**************************************" << endl;
        cout << "* w0nkru random Number Guessing Game *" << endl;
        cout << "**************************************" << endl;
        cout << endl;
        cout << "Guess the number between 1 - 100." << endl;
        cout << "Be cerafull. You have only 10 guesses!" << endl;
        cout << "Press ENTER to start!" << endl;
        cin.get();
        
do
{
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
        cout << "**************************************" << endl;
        cout << "* w0nkru random Number Guessing Game *" << endl;
        cout << "**************************************" << endl;
        cout << endl;
        cout << "Type a guess, between 1-100." << endl;
        cout << "Previous Guess: " << GuessNumber << "!" << endl;
        cout << "You used: " << Guesses << " guesses so far" << endl;
        cout << endl;
        cout << "Your guess: " << endl;
        cin >> GuessNumber;
        Guesses++;
    
        if (GuessNumber > RandomNumber)
            {
            cout << endl;
            cout << "Number too high!" << endl;
            cout << "Press ENTER to guess again." << endl;
            cout << endl;
            cin.get();
            
            }
        if (GuessNumber < RandomNumber)
            {
            cout << endl;
            cout << "Number too low!" << endl;
            cout << "Press ENTER to guess again." << endl;
            cout << endl;
            cin.get();
            }
        if (GuessNumber==RandomNumber)
            {
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
            cout << "**************************************" << endl;
            cout << "* w0nkru random Number Guessing Game *" << endl;
            cout << "**************************************" << endl;
            cout << endl;
            cout << "Congratulations!"<< endl;
            cout << "You have found the number!" << endl;
            cout << "The number was: " << RandomNumber << endl;
            cout << "It took You: " << Guesses << " guesses!" << endl;
            cout << endl;
            cout << "Would you like to play again?" << endl;
            cout << "Type * Y/N *" << endl;
            cin >> response;
            
        if (response == 'Y')
            {
            goto play;
            }
            else
            {
            return 0;
            }
            }
        if (Guesses==10)
            {
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
            cout << "**************************************" << endl;
            cout << "* w0nkru random Number Guessing Game *" << endl;
            cout << "**************************************" << endl;
            cout << endl;
            cout << "You're out of guesses!" << endl;
            cout << "The number was: " << RandomNumber << endl;
            cout << "Would you like to play again?" << endl;
            cout << "Type * Y/N *" << endl;
            cin >> response;
            
            if (response == 'Y')
            {
            goto play;
            }
            else
            {
            return 0;
            }
}

        cin.get();
} while (GuessNumber!=RandomNumber && Guesses<10);

    
    
    
    
    return 0;
}
