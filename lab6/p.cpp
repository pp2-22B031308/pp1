#include <iostream>

using namespace std;

void neg(int n){
    if (n < 0){
        n = -n;
    }
    cout << n;

}
int main(){
    int n;
    cin >>n;
    neg(n);

return 0;
}