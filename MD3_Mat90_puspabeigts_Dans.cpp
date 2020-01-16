#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	time_t t;
	srand((unsigned) time(&t));
	
	const int M = 3, N = 3;
	int A[N][M];
	int B[N][M];
	
	for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            A[i][j] = rand() % 90 + 10;
            
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    
    for(int j = 0; j < M; j++){
        for(int i = 2; i >= 0; i--){
        	cout << A[i][j] << " ";
        	
		}
			
			
        cout << endl;
	}
	
	
        	
	system("Pause");
	return 0;
}
