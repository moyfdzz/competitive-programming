#include <iostream>
using namespace std;

int main () {
    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int pos = 0;

    while (a[pos] < a[pos + 1] && pos < n - 1) {
        pos++;
    }

    while (a[pos] == a[pos + 1] && pos < n - 1) {
        pos++;
    }

    while (a[pos] > a[pos + 1] && pos < n - 1) {
        pos++;
    }

    cout << (pos == n - 1 ? "YES" : "NO") << endl;

    return 0;
}