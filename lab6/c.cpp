#include <iostream>
//#define int long long
using namespace std;
int cnt_a[101], cnt_b[101];
int ans = 0;
void read_a(int n){
    int x;
    for (int i = 0; i < n; i++)
        cin >> x, cnt_a[x]++;
}
void read_b(int n){
    int x;
    for (int i = 0; i < n; i++)
        cin >> x, cnt_b[x]++;
}

 int main()
{

    int n, cnt = 0;
    cin >> n;

    read_a(n);
    read_b(n);

    
    for(int i = 0; i < 101; i++)
        ans += (min(cnt_a[i], cnt_b[i]));
    cout << ans;
    return 0;
}