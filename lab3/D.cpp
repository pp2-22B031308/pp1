#include <iostream>
using namespace std;

 int main(){
    int i, n;
    cin>>n;
    int array[n];
    int max = - 1000000, pos =0, cpos;
    
    for(i=0; i< n; i++) {  
        cin>>array[i];
        pos++;
        if (max<array[i]) {
            max = array[i];
            cpos = pos;
        }
    }
    cout<< cpos;
    return 0;
 }