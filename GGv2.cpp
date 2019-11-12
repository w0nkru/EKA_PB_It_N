//
//  main.cpp
//  GuessingGame
//
//  Created by Marco Romanovskis on 11/11/2019.
//  Copyright © 2019 Marco Romanovskis. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
play:
const int MAX_VALUE = 100;
const int MIN_VALUE = 0;

int GuessNumber, guesses = 0;
int high = MAX_VALUE;
int low = MIN_VALUE;

char response;
    
system("clear");{
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
}
        cout << "*****************************************" << endl;
        cout << "* w0nkru random Number Guessing Game v2 *" << endl;
        cout << "*****************************************" << endl;
        cout << endl;
        cout << "Programm will guess number from 1 to 100." << endl;
        cout << "It will guess it in 10 guesses or less!" << endl;
        cout << "Press ENTER to start!" << endl;
        cin.get();
    
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
    
        cout << "*****************************************" << endl;
        cout << "* w0nkru ranodm Number Guessing Game v2 *" << endl;
        cout << "*****************************************" << endl;
        cout << endl;
        cout << "Think about a number between " << MIN_VALUE <<" and " << MAX_VALUE << endl;
    GuessNumber = ( high-low ) / 2;
        cout << "Current guess count: " << guesses << endl;
        cout << endl;

while(GuessNumber>low){
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
        cout << "*****************************************" << endl;
        cout << "* w0nkru random Number Guessing Game v2 *" << endl;
        cout << "*****************************************" << endl;
        cout << endl;
        cout << "Current guess count: " << guesses << endl;
        cout << endl;
        cout << "Is your number less than or equal to "<<GuessNumber<<"?" << endl;
        cout << "Type [Y]es or [N]o." << endl;
        cin  >>response;
    cin.get();
        guesses++;

        if(response=='y' || response=='Y') {
            high = GuessNumber;
            if(high-low==1) GuessNumber=low;
            else GuessNumber -= ( high - low ) / 2;
        }
        else if(response=='n' || response=='N') {
            low = GuessNumber;
            GuessNumber += (high - low ) /2;
        }
        else cout<<"Incorrect choice. Please response with [Y]es or [N]o!"<<endl;


}
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
            cout << "*****************************************" << endl;
            cout << "* w0nkru random Number Guessing Game v2 *" << endl;
            cout << "*****************************************" << endl;
            cout << endl;
            cout << "Your number is: "<< high << endl;
            cout << "Programm guessed your nummber in " << guesses << " tries!" << endl;
            cout << endl;
            cout << "Would you like to play again?" << endl;
            cout << "Type [Y]es or [N]o!" << endl;
            cin >> response;
            
            if(response=='y' || response=='Y')
            {
            goto play;
            }
            else
            {
            return 0;
            }


return 0;
}
