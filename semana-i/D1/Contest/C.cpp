#include <iostream>
using namespace std;

int main () {
    int b, k;

    cin >> b >> k;

    int nOdds = 0, data;
    int a[k];

    for (int i = 0; i < k; i++) {
        cin >> data;

        a[i] = data;

        if (data % 2 != 0 && data != 0) {
            nOdds++;
        }
    }

    if (b % 2 == 0) {
        cout << (a[k - 1] % 2 != 0 ? "odd" : "even");
    }
    else {
        cout << (nOdds % 2 == 0 ? "even" : "odd") << endl;
    }
}