#include <algorithm>
#include <iostream>
using namespace std;
long long n;
void ans()
{
    while(n != 0)
    {
        int x = n % 10;
        if(x % 2 == 1)
        {
            cout << "Not valid";
            exit(0);
        }
        n /= 10;
    }
    cout << "Valid";
}
int main()
{
    cin >> n;
    ans();
}