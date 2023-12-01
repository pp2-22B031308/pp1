#include <iostream>

using namespace std;
int x1, x2;
 int main(){
    int n,m;
    cin >> n >> m ;
    if (m == 1000)
    {
        x1 = m / 1000;
        x2 = m % 10;
    }
else 
{
    x1 = m / 100 ;
    x2 = m % 10 ; 
}
cout << n + x1 + x2;
 return 0;
}

