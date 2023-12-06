#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a[n][n*2-1];
    string x = "*";
    for(int i=0; i<n; ++i){
        for(int j=0; j<(n*2-1); ++j){
            if(i>=n-j-1 && j<=i+n-1){
                a[i][j] = x;
                
            }else{
                a[i][j] = ".";
            }
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<n*2-1; ++j){
            cout << a[i][j];
        }
          cout << endl;
    }

    return 0;
}