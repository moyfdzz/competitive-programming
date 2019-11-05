#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main () {
    string s, t;
    bool possible = true;
    unordered_set<char> vowels;

    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');

    cin >> s >> t;

    if (s.length() != t.length()) {
        possible = false;
    }

    if (possible) {
        bool firstVowel, secondVowel;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != t[i]) {
                firstVowel = vowels.count(s[i]);
                secondVowel = vowels.count(t[i]);

                if (firstVowel && !secondVowel) {
                    possible = false;
                    
                    break;
                }
                else if (!firstVowel && secondVowel) {
                    possible = false;

                    break;
                }
            }
        }
    }

    cout << (possible? "Yes" : "No") << endl;

    return 0;
}