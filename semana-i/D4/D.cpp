#include <iostream>
using namespace std;

int main () {
    int n;
    
    cin >> n;

    int a[n], ans = 0, helper = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        while (a[i - 1] < a[i] && i < n) {
            helper++;
            i++;
            ans = max(ans, helper);
        }

        helper = 0;
    }

    cout << ans + 1 << endl;

    return 0;
}