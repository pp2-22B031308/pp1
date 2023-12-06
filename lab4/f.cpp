#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int a[n][n];
    int max = -1000000, cposi, cposj; 

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
        
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (max < a[i][j]){
                 max = a [i][j];
                 cposi = i + 1;
                 cposj = j + 1;
            }
        
    }   
                
        cout << cposi << " " << cposj ;
        return 0;
}
