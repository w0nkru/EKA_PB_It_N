//  4_1 main.cpp
//
//  Created by Marco Romanovskis on 16/01/2020.
//  Copyright © 2020 Marco Romanovskis. All rights reserved.
//
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
//string time;
int main()
{
    int hh,mm,ss;
     
    cout << ("Ievadiet laiku (hh:mm:ss): "); //getline(cin, time);
    scanf("%d:%d:%d",&hh,&mm,&ss); //d decimal-integer
//  if(time.length() != 8){
//        cout << "Ievadits nepareizs formats!\n";}
//    else if(time[2] != ':'){
//        cout << "Ievadits nepareizs formats!\n";}
//    else if(time[5] != ':'){
//        cout << "Ievadits nepareizs formats!\n";}
    

    if(hh>=00 && hh<=23)
    {

        if(mm>=00 && mm<=59)
        {

            if(ss>=00 && ss<=59)
                cout << "Laiks norādīts pareizi!\n";
           
            else
                cout << "Nepareizi norādītas! [3]\n";
        }
        else
            {
            cout << "Nepareizi norādīts! [2]\n";
            }
    }
    else
        {
        cout << "Nepareizi norādīts [1]\n";
        }
 
    return 0;
}
