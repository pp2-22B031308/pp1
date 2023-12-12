#include <iostream>

using namespace std;

void add(int n,int  summ){
    int m;
    while (n > 0){
        m = n % 10;
        summ = summ + m;
        n = n / 10;
       
    }
       cout << summ ;
     
}

int main (){
    int n;
    int summ = 0;
    cin >> n;

    add(n, summ);

    return 0;
}