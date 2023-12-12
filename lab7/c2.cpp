#include <iostream>
#include <algorithm> 
using namespace std; 


string find (int *a, int n, int x, int i ){
    if(i >= n) return "No";
    if(a[i] == x) return "Yes";
    return find(a, n, x, i + 1);
}

int main (){
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> x;

    cout << find(a, n, x, 0);

    return 0;
}