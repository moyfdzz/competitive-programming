#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n, ans = 0, helper = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] + 1 == a[i + 1]) {
            helper++;
        }
        else {
            helper = 0;
        }

        if ((a[i] == 1 && a[i] + 1 == a[i + 1] )|| a[i + 1] == 1000) {
            helper++;
        }

        ans = max(helper, ans);
    } 

    cout << ans - 1 << endl;

    return 0;
}