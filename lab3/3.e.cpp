#include <iostream>
using namespace std;

 int  main(){
    long long i, n, sum= 0;

    cin>>n;
    long array[n];
    for(i=0; i< n; i++)
     {
        cin>> array[i];
     }
     for(i=0; i< n; i++)
        {
            sum = sum + array[i];
        }
    cout << sum;
    return 0;
 }