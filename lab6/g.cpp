#include <iostream>
#include <string>
using namespace std;
 string s;

string vowel(string s){
    string res = "";
    for (int i = 0; i < s.size(); i++ ){
        if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'A'||s[i] == 'E'|| s[i]== 'I'|| s[i]== 'U'|| s[i] == 'O' )){
            res += s[i];
        }
    }
    return res;
}


int main(){
   
    getline(cin, s);

     cout <<vowel(s) ;
    return 0;
}