#include <iostream>
#include <string>
using namespace std;

int main () {
    int n, d, ans = 0;
    bool possible = true;
    string s;

    cin >> n >> d;
    cin.ignore();
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i + d] == 1) {
            i += d - 1;
        }
        else {
            i += d - 1;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}