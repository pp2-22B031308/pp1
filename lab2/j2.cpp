#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        while (x) {
            if (x % 10 == 0) {
                ++total;
            }
            x /= 10;
        }
    }
    cout << total << endl;
    return 0;
}