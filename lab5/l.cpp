#include <iostream>
#include <algorithm>
using namespace std;


bool order(string s){
    int n = s.length();
    char c[n];

    for (int i = 0; i < n; i++) {
        c[i] = s[i];

        sort(c, c + n);

         for (int i = 0; i < n; i++)
           if (s[i] < s[i - 1])
           return false;
    }
    return true;

}

int main(){
    string s;
    cin >> s;
    int n = s.length();


    for (int i = 1; i < n; i++){
        if (order(s))
        cout << "YES";

        else 
        cout << "NO";
    

      return 0;
}
}