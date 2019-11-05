#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

#define maxN 100
#define maxA 101

int a[maxN], c[maxA];

int main() {
    int q, n;

    cin >> q;

    while (q--) {
        cin >> n;
        memset(c, 0, sizeof(c));

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[a[i]]++;
        }

        int ans=1;

        for (int i = 0; i < n; i++) {
            if (c[i + 1] != 0 && c[i] != 0)
                ans = 2;
        }

        cout << ans << endl;
    }

    return 0;
}