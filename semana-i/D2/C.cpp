#include <iostream>
using namespace std;

int main () {
    int n, k, ans = 0;
    
    cin >> n >> k;

    int red = 2 * n, green = 5 * n, blue = 8 * n;

    while (red > 0 || green > 0 || blue > 0) {
        if (red > 0) {
            red -= k;
            ans++;
        }
        
        if (green > 0) {
            green -= k;
            ans++;
        }

        if (blue > 0) {
            blue -= k;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}