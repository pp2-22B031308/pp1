#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int num[100001],x;
    cin >>x;

    //store input
    for(int i=0; i < x; ++i){
        cin >> num[i];
    }

    //to square
    for(int a=0; a<x; ++a){
        cout << num[a]*num[a] <<" ";
    }
}