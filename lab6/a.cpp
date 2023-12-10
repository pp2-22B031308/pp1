#include <iostream>
using namespace std;

void summ(int a, int b, int sum){
    
     sum = a + b;
     cout << sum ;
}

int main(){

     int a, b, sum;
     cin >> a >> b;

    summ( a, b, sum);

    return 0;
}
