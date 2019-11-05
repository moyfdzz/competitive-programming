#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main () {
    int n;
    string word, ans = "";
    bool found = false;

    cin >> n >> word;

    for (int i = 0; i < n - 1 && !found; i++) {
        if (word[i] != word[i + 1]) {
            ans = word.substr(i, 2);
            found = true;
        }
    }

    if (found) {
        cout << "YES" << endl << ans << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}