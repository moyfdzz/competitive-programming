#include <iostream>
using namespace std;

int main () {
    int t;
    long long int x, y;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;

        cout << (x - y > 1 ? "YES" : "NO") << endl;
    }

    return 0;
}