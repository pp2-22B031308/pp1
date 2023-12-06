#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max=INT_MIN;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    int x=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(a[i][j]>max){
                    max=a[i][j];
                    x = i;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: "<< x+1 <<";"<<x+1;

    return 0;
}