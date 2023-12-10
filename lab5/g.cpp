#include <iostream>
using namespace std;

void sum(string s, string t){

    if (s == t)
        cout << "YES";
        
    else
        cout << "NO";
}

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    
    sum(s, t);

    return 0;
}