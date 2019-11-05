#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main() {
    long long int n, k, ans = 0;
    vector<long long int> values;
    string keys;
    char prev;

    cin >> n >> k;
  
    int data;

    for (int i = 0; i < n; i++) {
        cin >> data;

        values.push_back(data);
    }

    cin >> keys;

    prev = keys[0];
    priority_queue<long long int> current;
    current.push(values[0]);

    for (int i = 1; i < n; i++) {
        if (keys[i] == prev){
            current.push(values[i]);
        } 
        else {
            for (int j = 0; j < k && !current.empty(); j++) {
                ans += current.top();
                current.pop();
            }

            current = priority_queue<long long int>();
            prev = keys[i];
            current.push(values[i]);
        }
    }
    
    for (int j = 0; j < k && !current.empty(); j++) {
        ans += current.top();
        current.pop();
    }
  
    cout << ans << endl;
    
    return 0;
}