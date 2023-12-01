#include <iostream>
using namespace std;

 int main(){
    int n, k =0, m=0, i;
    cin >> n;
      int array [n];
      for (i =0; i< n; i++)
    {
        cin >> array [i];
        //cout << array [i];
    }

      for (i =0; i< n; i++)
     {
        if (array [i] %2== 0)
        {
        k = k+1;
        }
        else
         m = m +1;
     }

cout << k << " ";
cout << m;
return 0;
 }

