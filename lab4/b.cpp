#include <iostream>
#include <limits.h>

using namespace std;

int main (){
    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; ++i){
         for (int j = 0; j < n; ++j){
            cin >> a [i][j];
         }
    }
    
    int mx = INT_MIN;
    int smx = INT_MIN;

    for (int i = 0; i < n; ++i){
         for (int j = 0; j < n; ++j){
            if (mx < a[i][j]){
                smx = mx;
                mx = a[i][j];
            }else if(a[i][j] != mx && a[i][j] > smx){
                smx = a[i][j];
            }
         }
    }
   
    if(smx != INT_MIN && mx != smx){
        cout << smx;
    }else{
        cout << 0;
    }

    return 0;
}