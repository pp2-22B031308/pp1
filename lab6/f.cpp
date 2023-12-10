#include <iostream>
using namespace std;

int f(string s){
    int res = 0;

    for(size_t i = 0; i < s.size(); ++i){
        if(isdigit(s[i])){
            res++;
        }
    }
    return res;
}

int main(){
    int n, cnt = 0;
    string s;

    cin >> s;
    cin >> n;
    
    if(f( s) >= n){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}

