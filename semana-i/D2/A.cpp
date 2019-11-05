#include <iostream>
#include <string>
using namespace std;

int main () {
    long long int q, size;
    string number;

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> size >> number;

        if (size == 2) {
            if (number[0] == number[1]) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;

                cout << 2 << endl << number[0] << " " << number[1] << endl;
            }
        }
        else {
            cout << "YES" << endl;

            cout << 2 << endl << number[0] << " " << number.substr(1) << endl;
        }
    }

    return 0;
}