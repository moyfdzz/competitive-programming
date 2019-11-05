#include <iostream>
#include <math.h>
using namespace std;

int main () {    
    long long int q, l, r;

    cin >> q;

    long long int sumEvens, sumOdds;

    for (int i = 0; i < q; i++) {
        cin >> l >> r;

        sumOdds = pow((r + 1) / 2, 2) - pow(l / 2, 2);
        sumEvens = (r * (r + 1) / 2) - (l * (l - 1) / 2) - sumOdds;

        cout << sumEvens - sumOdds << endl;
    }

    return 0;
}