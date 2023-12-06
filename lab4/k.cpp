#include <iostream>
#include <cstdlib>

#define size 10000
using namespace std;


void rowSum(int a[n][m] ,int m, int n, ){
    
        int sum;
        for (int i= 0; i < n; ++i){
            sum = 0;

            for (int j = 0; j < m; ++j){
            sum = sum +a[i][j];
             
            }
            cout << "sum of row number"<< "i + 1" << "is" << sum << endl;
         }
    }
int main (){
    int n, m;
    cin >> n >> m ;
    
    int a[n][m];
    
    for (int i= 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
   cout <<rowSum();
   return 0;
}
