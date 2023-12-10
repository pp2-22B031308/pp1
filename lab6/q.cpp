#include <iostream>

using namespace std;

void perc(double n, int m){
    cout << ( m / n) * 100;
}

int main(){
    int n, m ;
    cin >> n >> m;
    perc(n, m);

return 0;
}