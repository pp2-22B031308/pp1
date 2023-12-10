#include <iostream>
using namespace std;
void read(int n, int m, int ** a){
    for(int i = 0; i < n;i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

void print(int n, int m, int ** a){
    for(int i = 0; i < n;i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j]<< " ";
        }
        cout << endl;
    }
}

void trans(int **a, int **b, int n, int m){
    for(int i = 0; i < m;i++){
        for (int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }
}

void extend(int ** a, int n, int m){
    for(int i = 0; i < n;i++){
        a[i] = new int[m];
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int * a[n];
    int * b[m];

    extend(a, n, m);
    extend(b, m, n);

    read(n, m, a);
    trans(a, b, n, m);
    print(m, n, b);

    return 0;
}