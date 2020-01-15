#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	time_t t;
	srand((unsigned) time(&t));
	
	int const M = 2, N = 2;
	int A[M][N];
	int B[N][M];
	
	for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++)
            A[i][j] = rand() % 90 + 10;
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++)
            cout << A[i][j] << " ";
        cout << endl;}
    
	cout << endl;
	
	for(int i = 0; i < M; i++)
    	for(int j = 0; j < N; j++)
        	B[i][j] = A[M - 1 - j][i];
        	
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cout << B[i][j] << " ";
        cout << endl;}
	
	system("Pause");
	return 0;}
