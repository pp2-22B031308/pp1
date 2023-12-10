#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    string s;
    vector <int> a;
    set <int> b;
    cin >> s;
    if(s.length() % 2 == 0){
        for(int i = 0; i < s.length(); i++){
            int num = (int)s[i] - 48;
            a.push_back(num);
            b.insert(num);
        }
        int cnt = 0, div = 0, d = b.size();
        sort(a.begin(), a.end());
        int same = 0;
        for(int i = 0; i < s.length(); i++){
            same = a[div];
            if(same = a[i]) cnt++;
            div++;
        }
        int mod = cnt % d;
        if(mod == 0) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
    
}