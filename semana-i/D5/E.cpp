#include <iostream>
#include <string>
using namespace std;

int q;
string s, t;
bool sameLetters = false;

int main() {
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> s >> t;

        // con que tengan uno igual
        for (int j = 0; j < s.length(); j++) {
            for (int k = 0; k < t.length(); k++) {
                if (s[j] == t[k]) {
                    sameLetters = true;
                }
            }
        }

        cout << (sameLetters ? "YES" : "NO") << endl;

        sameLetters = false;
    }

    return 0;
}