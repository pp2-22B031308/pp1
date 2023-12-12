#include <iostream>
#include <algorithm> 
using namespace std; 

string dec(int n){
    string s;
    while(n){
        if (n & 1)
            s = s + '1';
        else
            s = s + '0';
        n >>= 1;
    }
    return s;
}
void rev(string s){

    for (int i = s.size() -1 ; i >= 0; i--){
        cout << s[i];
    }
}
int main (){
    int n;
    cin >> n;
    rev (dec(n));
    return 0;

}