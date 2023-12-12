#include <iostream>

using namespace std;

long long add(string n, long long sum){
     if(n.size() == 0) return sum;
     return add(n.substr(1), sum + (n[0] - 48));
}

int main (){
    string n;
    cin >> n;
    cout << add(n, 0);
    return 0;
}