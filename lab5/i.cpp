#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main (){
    string s, t;
    cin >> s;
    cin >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    cout <<"YES";
    else
    cout << "NO";

    return 0;
}