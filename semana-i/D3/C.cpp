#include <iostream>
using namespace std;

int main () {
    int n, ans = 1, helper = 0, helper2 = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            helper = helper2;
            helper2 = 1;
        }
        else {
            helper2++;
        }

        ans = max(ans, min(helper, helper2));
    }

    cout << 2 * ans << endl;

    return 0;
}