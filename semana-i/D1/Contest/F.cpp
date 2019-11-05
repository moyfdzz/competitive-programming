#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    vector<int> p;

    int d;

    for (int i = 0; i < n; i++) {
        cin >> d;

        p.push_back(d);
    }

    if (p.size() == 1 && p[0] <= k) {
        cout << 1 << endl;

        return 0;
    }

    int ans = 0, start = 0, end = p.size() - 1;
    bool check = true;

    while (check && start < p.size() && end > 0) {
        if (p[start] <= k) {
            ans++;
            start++;
        }
        else if (p[end] <= k) {
            ans++;
            end--;
        }
        else {
            check = false;
        }
    }

    cout << ans << endl;

    return 0;
}