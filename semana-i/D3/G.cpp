#include <iostream>
#include <string>
using namespace std;

int main () {
    int n, helper = 0, ans = 0;
    string text;

    cin >> n;
    cin.ignore();
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            helper++;
        }
        else if (text[i] == ' ') {
            if (ans < helper) {
                ans = helper;
            }

            helper = 0;
        }

        if (i == text.length() - 1 && ans < helper)
            ans = helper;
    }

    cout << ans << endl;

    return 0;
}