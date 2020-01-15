#include <iostream>
#include <ctime>
using namespace std;
  
#define N 3
  
void rotate(int a[N][N])
{
  
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N - i - 1; j++) {
  
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}
  
void printMatrix(int mt[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << mt[i][j] << " ";
        cout << endl;
    }
}
  
int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int mt[N][N] = { { 1, 2, 3 },
                      { 4, 5, 6 },
                      { 7, 8, 9 } };
    cout << "Original Matrix" << endl;
    printMatrix(mt);
    cout << "Matrix after rotation" << endl;
    rotate(mt);
    printMatrix(mt);
    return 0;
}
