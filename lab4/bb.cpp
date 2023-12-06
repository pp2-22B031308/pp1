#include <algorithm>
#include <iostream>
#define size 100000
using namespace std;

void rowSum(int arr[size][size] ,int m,int n){
    int sum;
    
   
    for(int i = 0; i < n; i++){
        sum = 0;
        
        for(int j = 0; j < m; j++){
            sum = sum + arr[i][j];      
        }
        
        cout<<"sum of row number"<<i+1<<" is: " <<sum <<endl;     
    }
}

void columnSum(int arr[size][size], int m, int n){
    int sum;
    
   
    for(int i = 0; i < n; i++){
        sum = 0;
        
        for(int j = 0;j < m; j++){
            sum = sum + arr[j][i];      
        }
        cout<<"sum of column number"<<i + 1<<" is: "<<sum<<endl;   
    }
}
int main() {
    int arr[size][size], m ,n;
    
    cin>>n >> m;
    
    cout<<"\nInput the matrix: "<<endl;
    
   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    
    
    rowSum(arr, m, n);
    

    columnSum(arr, m ,n);
    
    return 0;
}