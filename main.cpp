//
//  main.cpp
//  4_1
//
//  Created by Marco Romanovskis on 16/01/2020.
//  Copyright © 2020 Marco Romanovskis. All rights reserved.
//
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
    int hh,mm,ss;
     
    cout << ("Ievadiet laiku (hh:mm:ss format): ");
    scanf("%d:%d:%d",&hh,&mm,&ss);
     
    //check hh
    if(hh>=00 && hh<=23)
    {
        //check mm
        if(mm>=00 && mm<=59)
        {
            //check ss
            if(hh>=00 && hh<=59)
                cout << "Laiks norādīts pareizi!.\n";
           
            else
                cout << "Nepareizi norādīts! 3.\n";
        }
        else
        {
            cout << "Nepareizi norādīts! 2.\n";
        }
    }
    else
    {
        cout << "Nepareizi norādīts! 1\n";
    }
 
    return 0;
}
