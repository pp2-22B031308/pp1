#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main(){
    int n1,num1[100001];
    cin >> n1;

    //store input 1 
    for(int i=0;i<n1;++i){
        cin >>num1[i];
    }

    int n2,num2[100001];
    cin >> n2;

    //store input 2
    for(int i=0;i<n2;++i){
        cin >>num2[i];
    }

    int num3[n1+n2],n3 = n1+n2;

    int a = 0, b = 0, c = 0;

      while(b < n1){
      num3[a++] = num1[b++];
    }
       
      while(c< n2){
      num3[a++] = num2[c++];
    }
    sort(num3, num3+n3);

        for(int i=0;i<n3;++i){
            cout << num3[i] << " ";
    }



}