#include <iostream>

using namespace std;

 int main(){
    int n, k;
    cin >> n >>k;
        if (n >= k )
{
         if ((n * 2 )% k == 0)
            cout << (n * 2) /k ;
            //cout << 1;
        else 
            cout <<  (n * 2) / k + 1;
            //cout << 2;
}
    
        else 
    cout << 2;
    //cout <<  (n * 2) / k + 1;
        return 0;
 }

    
