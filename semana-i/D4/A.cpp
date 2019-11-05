#include <iostream>
using namespace std;

int main () {
    int n, ans = 0;

    cin >> n;

    while (n - 100 >= 0) {
        n -= 100;
        ans++;
    }

    while (n - 20 >= 0) {
        n -= 20;
        ans++;
    }

    while (n - 10 >= 0) {
        n -= 10;
        ans++;
    }

    while (n - 5 >= 0) {
        n -= 5;
        ans++;
    }

    while (n - 1 >= 0) {
        n -= 1;
        ans++;
    }

    cout << ans << endl;

    return 0;
}