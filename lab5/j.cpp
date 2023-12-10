#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string s, t1, t2;
    string p1, p2;
    cin >> s;
    t1 = s.substr(1, s.size());
    t2 = s.substr(0, s.size() - 1);
    p1 = s.substr(1, s.size());
    p2 = s.substr(0, s.size() - 1);


    reverse(t1.begin(), t1.end());
    if (p1 == t1 ){
    cout << "YES";
    
    }

    else
    {
        reverse(t2.begin(), t2.end());
     if (p2 == t2 )
        cout << "YES";
     else
        cout << "NO";
   
    }
 return 0;
}