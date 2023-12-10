#include <iostream>

using namespace std;

void add(int n,int  summ, int last){
    int m;
    while (n > 0){
        m = n % 10;
        summ = summ + m;
        n = n / 10;
        //cout << summ << " " << m << " " << n << endl;
    }
     if (summ % last == 0)
          cout << "Yes";
    else
        cout << "No";    
     
}

int main (){
    int n;
    int summ = 0;
    cin >> n;

    add(n, summ, n % 10);

    return 0;
}