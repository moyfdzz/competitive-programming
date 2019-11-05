#include <iostream>
using namespace std;

int main () {    
    int A, D, M, g, p, b;

    cin >> A >> D >> M >> g >> p >> b;

    bool happy = true;

    if (g >= A) {
        g -= A;
        A = 0;
    }

    int gp = g + p;

    if (gp >= D) {
        gp -= D;
        D = 0;
    }

    if (gp + b >= M) {
        M = 0;
    }

    if (A > 0 || D > 0 || M > 0) {
        happy = false;
    }

    cout << (happy ? "YES" : "NO") << endl;

    return 0;
}