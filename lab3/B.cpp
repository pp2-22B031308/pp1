#include <iostream>
using namespace std;

 int main(){
    int n, k = 0, i;
    cin >> n;

      int array [n];
        for (i =0; i< n; i++)
    {
        cin >> array [i];
        //cout << array [i];
    }

        for (i =0; i< n; i++)
     {
        if (array [i] > 0)
        k = k+ 1; 
      }
       cout << k;
      return 0;
 }