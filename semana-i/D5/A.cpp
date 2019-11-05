#include <iostream>
#include <unordered_set>
using namespace std;

int l, r, ans = -1;
unordered_set<int> numbers;

bool checkIfAllUnique(int n) {
    int unique = true;

    while (n / 10 > 0) {
        if (numbers.count(n % 10)) {
            unique = false;
        }
        else {
            numbers.insert(n % 10);
        }

        n /= 10;
    }

    if (numbers.count(n % 10)) {
        unique = false;
    }

    numbers.clear();

    return unique;
}

int main () {
    cin >> l >> r;
    
    for (int i = l; i <= r; i++) {
        if (checkIfAllUnique(i)) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}