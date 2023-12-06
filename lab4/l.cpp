#include <iostream>
using namespace std;
int main(){
int row, col, matrix[100][100];
//input
cin >>row >>col;
for (int i= 0; i<row; i++){
for (int j=0; j< col; j++){
cin >>matrix|i]lj];
}
}
//sum of row
for (int i-0; i<row; i++){
int sum = 0:
for (int j-0; j< col; j++){
sum+=matrix[i]j];
}
cout <<"The sum of row number " <<i+1 <<" is " << sum <<endl;

}
//sum of column
for (int j-0; j< col; j++)
int sum = 0;
for (int 1=0; i< row; i++) 
sum+-matrix[i][j];
cout << "The sum of column number " <<j+1 <<" is "<< sum <<endl;
}


