//
//  main.cpp
//  Pailndroms
//
//  Created by Marco Romanovskis on 12/11/2019.
//  Copyright © 2019 Marco Romanovskis. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()  {
    paly:
int n, num, digit, rev = 0;
char response;
    
system("clear");
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
        cout << "**************************************" << endl;
        cout << "*    w0nkru Palindrome check code    *" << endl;
        cout << "**************************************" << endl;
        cout << endl;
        cout << "Please, choose:" << endl;
        cout << "[1] If You want to check custom number" << endl;
        cout << "[2] If You want to see all 6 Digit Palindroms" << endl;
        cin >> response;
    if(response=='1'){
                
            cout << "Enter number to check it: ";
            cin >> num;
            n = num;
            do
            {
                 digit = num % 10;
                 rev = (rev * 10) + digit;
                 num = num / 10;
            } while (num != 0);
            cout << "Reverse of the number is: " << rev << endl;
            if (n == rev)
                cout << "Number is a palindrome.";
            else
                cout << "Number is not a palindrome." << endl;
                cout << endl;
                cout << "Would you like to check another?" << endl;
                cout << "Type [Y]es or [N]o" << endl;
                cin >> response;
                
             if(response=='y' || response=='Y')
                {
                goto paly;
                }
                else
                {
                return 0;
                }
    }
    else
                {
                cout<<"Palindrome numbers between 100000 and 999999 are"<<endl;
                for(int p=100000;p<=999999;p++)
                {
                int num=p,rev=0;
                do
                {
                int digit = num % 10;
                rev = (rev * 10) + digit;
                num = num / 10;
                } while (num != 0);
                if (p == rev)
                cout <<i<<"\t";
                }
                }

                
    return 0;
}
