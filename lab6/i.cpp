#include <iostream>
#include <cctype>
using namespace std;

void up_string (string s){
    for (int i = 0; s[i] != '\0'; i++ ){
        if (i % 2 == 0){
            if (s[i] >= 'a' && s[i]<= 'z'){
            s[i] = s[i] - 32;
        }
    }
    }
 cout << s;
}

int main (){
    string s;
    cin >> s;

    up_string(s);
    return 0;
}