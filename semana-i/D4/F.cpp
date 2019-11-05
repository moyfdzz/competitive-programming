#include <iostream>
using namespace std;

int main () {
    int n, v, ans = 0;

    cin >> n >> v;

    if (v >= n - 1) {
        ans = n - 1;
    }
    else {
        ans = v + (n - v) * (n - v + 1) / 2 - 1;
    }

    cout << ans << endl;

    return 0;
}