#include <iostream>
using namespace std;

int add(int n,int summ){
    int m;
    while (n > 0){
        m = n % 10;
        summ = summ + m;
        n = n / 10;
       
    }
    return summ;
}

int main (){
    int n;
    cin >> n;
    int summ = 0;

    cout << add(n, summ);

return 0;
}