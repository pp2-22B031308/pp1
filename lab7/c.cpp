#include <iostream>
#include <algorithm> 
using namespace std; 


bool read (int n, int *a,int x ){
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cin >> x;
    if (a[i] == x)
    return true;
    }
    return false;
}

int main (){
    int n, x;
    cin >> n;
    int a[n];
   
   if (read (n,a,x))
   cout << "Yes";
   else 
   cout << "No";

return 0;
}