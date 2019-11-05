#include <iostream>
using namespace std;

int main () {
    int n, x, y;

    cin >> n >> x >> y;

    int mWhite = 0, mBlack = 0;

    int xWhite = 1, yWhite = 1, xBlack = n, yBlack = n;

    while (xWhite < x && yWhite < y) {
        xWhite++;
        yWhite++;
        mWhite++;
    }

    while (xBlack > x && yBlack > y) {
        xBlack--;
        yBlack--;
        mBlack++;
    }

    mWhite += abs(x - xWhite) + abs(y - yWhite);
    mBlack += abs(xBlack - x) + abs(yBlack - y);

    if (mWhite == mBlack) {
        cout << "White" << endl;
    }
    else if (mWhite < mBlack) {
        cout << "White" << endl;
    }
    else {
        cout << "Black" << endl;
    }
    
    return 0;
}