#include <iostream>
using namespace std;

 int main(){
    int i, n, max;

    cin>>n;
    int array[n];
    for(i=0; i< n; i++)
      {  
        cin>>array[i];
        max = array[0];
      }
    for(i=1; i< n; i++)
    {

        if(array[i] > max)
            max = array[i];
       
    }
    cout<< max;
    return 0;
 }