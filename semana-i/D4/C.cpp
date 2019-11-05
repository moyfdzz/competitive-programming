#include <iostream>
#include <vector>
using namespace std;

int main () {
    long long int n, ans = 0, data, nNegatives = 0, nZeros = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;

        if (data == 0) {
            ans++;
            nZeros++;
        }
        else if (data > 0) {
            ans += data - 1;
        }
        else if (data < 0) {
            if (data == -1) {
                nNegatives++;
            }
            else {
                ans += abs(data) - 1;
                nNegatives++;
            }
        }
    }

    if (nNegatives % 2 && nZeros == 0) {
        ans += 2;
    }
    
    cout << ans << endl;

    return 0;
}