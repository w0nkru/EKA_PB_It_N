#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
  
#define N 3

void rotate(int a[N][N])
{
  
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N - i - 1; j++)
         {
  
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
    int mt[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            mt[i][j] = rand() %90 + 10;
    }
    
cout << R"(
           ___        _
__      __/ _ \ _ __ | | ___ __ _   _
\ \ /\ / / | | | '_ \| |/ / '__| | | |
 \ V  V /| |_| | | | |   <| |  | |_| |
  \_/\_/  \___/|_| |_|_|\_\_|   \__,_|
)";
cout << "**************************************" << endl;
cout << "*     Rotate Matrix by 90 degrees    *" << endl;
cout << "**************************************" << endl;
cout << endl;
    
    cout << "Original Matrix" << endl;
    printMatrix(mt);
    cout << "Matrix after rotation" << endl;
    rotate(mt);
    printMatrix(mt);
    return 0;
}
