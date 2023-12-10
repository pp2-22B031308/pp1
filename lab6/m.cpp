#include <iostream>
using namespace std;

void read (int a[],int n ){
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void rev(int a[], int reverse[], int n){
    for (int i = n - 1; i >= 0;i--){
        reverse[n - 1 - i] = a[i];
    }
}

void print(int a[], int n){
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}


int main (){
    int n;
    cin >> n;
    int a[n];
    int reverse[n];
    read (a, n);
    rev(a, reverse, n);
    print(reverse, n);

    return 0;
}