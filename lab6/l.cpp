#include <iostream>
#include <string>
using namespace std;

bool f(string s, int n){
    bool result = false;    
    int cnt = 0;
    for(size_t i = 0; i < s.size(); ++i){
        if(isdigit(s[i])){
            cnt++;
        }else{
            if(cnt == n){
                result = true;
                break;
            }
            cnt = 0;
        }
    }
    return result;
}

int main(){
    int n;
    string s;

    cin >> s;
    cin >> n;
    
    if(f(s, n)){
        cout << "Valid";
    }else{
        cout << "Not valid";
    }
    return 0;
}