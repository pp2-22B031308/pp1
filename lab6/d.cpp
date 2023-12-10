#include <iostream>
using namespace std;


bool iii(int a[], int n, int x){
    //input
   
    for (int i = 0; i < n; i++){
        if (a[i]== x)
            return true;
    }
        return false;
    
    }

int main (){
    
   int n;
    cin >> n;
     int a[n];
     for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if (iii(a, n, x))
        cout << "Yes";
    else
        cout << "No";

return 0;
}
