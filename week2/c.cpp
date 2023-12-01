#include <iostream>

using namespace std;

 int main(){
    int n;
    int a, b, c, d;
    cin >> n;
    a = n % 2; 
    n /= 2;
    b = n % 2;
    n /= 2;
    c = n % 2;
    n /= 2;
    d = n % 2;
    //cout << a << " " << b << " " << c << " " << d;
    int sum = 0;
    if (a == 1)
        sum += 8;

    if (b == 1)
        sum += 4;

    if (c == 1) 
     sum += 2;

    if (d == 1)
        sum += 1;

    cout << sum; 
    return 0;
 }