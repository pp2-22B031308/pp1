#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main (){

    string a, b, c;
    cin >> a >> b;

    c = a;
    while (a != b){
        a = a + c;
        if (a.length() > b.length())
        break;
    }

    if (a == b)
    cout << "YES";
    else
    cout << "NO";

return 0;
}