#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int num[100001],x;
    cin >> x;

    //store input array
    for(int i=0; i < x; ++i){
        cin >> num[i];
    }

    //to find duplicates
    for(int a=0; a < x; ++a){
        if(num[a] != num[a+1]){
            cout << num[a] <<" ";
        }
    }

}