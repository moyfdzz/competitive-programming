#include <iostream>
#include <unordered_set>
using namespace std;

long long int n, sum;
unordered_set<long long int> sums;
bool possible = false;

int main() {
    cin >> n;

    for (int i = 1; (i * (i + 1)) / 2 <= n; i++) {
        sum = (i * (i + 1)) / 2;

        if (!sums.count(sum)) {
            sums.insert(sum);
        }

        if (sums.count(n - sum)) {
            possible = true;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;

    return 0;
}