#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n;

    cin >> n;

    cout << pow(n, 2) + pow(n - 1, 2) << endl;

    return 0;
}