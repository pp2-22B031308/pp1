
#include <iostream>
using namespace std;

 int main(){
    int  i,n, sum = 0;
    cin >> n;
     i = 1;
while (i <= n)
    {
        sum = sum + i;
        i = i+ 1;
//sum += n;
//n--;
    }
cout << sum;
return 0;
 }