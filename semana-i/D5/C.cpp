#include <iostream>
#include <cstring>
using namespace std;

#define max 100010
int n, m, ans = max, element, helper = 0;
bool primes[max];
int mat[510][510];

void SieveOfEratosthenes() { 
    memset(primes, true, sizeof(primes)); 

    primes[1] = false;
  
    for (int p = 2; p * p <= max; p++) {
        if (primes[p] == true) { 
            for (int i = p * p; i <= max; i += p) {
                primes[i] = false;
            } 
        } 
    } 
} 

int main() {
    cin >> n >> m;

    SieveOfEratosthenes();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> element;

            if (primes[element]) {
                mat[i][j] = 0;
            }
            else {
                while (!primes[element]) {
                    element++;
                    helper++;
                }

                mat[i][j] = helper;
                helper = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        helper = 0;

        for (int j = 0; j <= m; j++) {
            if (j == m) {
                ans = min(ans, helper);
            }
            else {
                if (mat[i][j]) {
                    helper += mat[i][j];
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        helper = 0;

        for (int j = 0; j <= n; j++) {
            if (j == n) {
                ans = min(ans, helper);
            }
            else {
                if (mat[j][i]) {
                    helper += mat[j][i];
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}