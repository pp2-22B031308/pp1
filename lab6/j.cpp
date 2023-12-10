#include <iostream>
using namespace std;

int max(int x, int y){
    if (x > y)
        return x;
    else
        return y;
}
int main(){
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    int f_max = max(n1,n2);
    int s_max = max(n3,n4);
    int maximum = max(f_max, s_max);
    cout << maximum;

    return 0;

}