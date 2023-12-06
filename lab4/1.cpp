#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, maxx = -1000000001, x, y, summ = 0, minn = 99999;
    cin >> n >> m;
    long long a[n][m], b[n];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            summ += a[i][j];
        }
        b[i] = summ;
        summ = 0;
    }
    for(int i = 1; i <= n; i++){
        if(b[i] < minn){
            x = i;
            minn = b[i];
        }
    }
    cout << x;
}