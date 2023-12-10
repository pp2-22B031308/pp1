#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <cmath>
int main(){
    int n,num[100001],num2[100001];
    cin >> n;

    //input
    for(int i=0;i<n; ++i){
        cin >> num[i];
        num2[i] = num[i];
    }

    sort(num2,num2+n);
    for(int i=0;i<n; ++i){
        if(num2[n-1] == num[i]){
            num[i] = num2[0];
        }
    }
    for(int i= 0; i < n; ++i){
        cout << num[i] <<" ";
    }

}