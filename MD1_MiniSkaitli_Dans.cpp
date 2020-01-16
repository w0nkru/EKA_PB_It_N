#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "Uzmini skaitli no 1 lidz 100 maksimums 10 meginajumos" << endl;
	
	
		do
		{
			cout << "Ievadi skaitli no 1 lidz 100 : ";
			cin >> guess;
			tries++;

			if (guess > num && tries < 10)
				cout << "Pa lielu" << endl;
			else if (guess < num && tries < 10)
				cout << "Pa mazu" << endl;
			else if (tries < 10)
				cout << "Apsveicu! Jus uzminejat skaitli " << tries << " meginajumos!" << endl;
			else
				cout << "Jus zaudejat jo neuzminejat 10 meginajumos" << endl;
				
		} while (tries < 10);
	system("pause");
	return 0;
}
