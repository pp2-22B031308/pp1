#include <iostream>
using namespace std;

int main (){
    int n, m;
    cin >> n >> m ;
    
    int a[n][m];
    int sum[n];
    
    for (int i= 0; i < n; ++i){
        sum[i] = 0;
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
            sum[i] += a[i][j];
        }
    }

    int pos = 0;
    for(int i = 1; i < n; ++i){
        if(sum[i] < sum[pos]){
            pos = i;
        }
    }

    cout << pos + 1 << endl;

    return 0;
}
