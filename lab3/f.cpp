#include <iostream>
using namespace std;

 int main(){
    int n, i;
    cin >> n;
      int array [n];
    for (i =0; i< n; i++)
    {
        cin >> array [i];
    }

     for (int i = n - 1; i >= 0; i--)
     {
        cout<< array[i] << " ";
      }
      return 0;
 }