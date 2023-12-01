#include <iostream>
using namespace std;

 int main(){
    int n, i, k=0;
    cin >> n;
    int array[n];
    
    for (int i =0; i< n; i++){
      cin >> array[i];
        //cout << array [i];
    }
    for (i =0; i< n; i++){
      if (array[i] % 10 == 7){
        k = k+1;
      }
     }

    cout << k ;
    return 0;
 }

