#include <iostream>
using namespace std;

 int main(){
    int  n, sum = 0;
    cin >> n;

while (n>= 0)
    {
sum += n;
n--;
    }
cout << "\n " << sum;
return 0;
 }