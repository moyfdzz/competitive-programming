#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <stack>
using namespace std;

int main () {
    int n, k;

    cin >> n >> k;

    int data;

    unordered_set<int> US;
    unordered_map<int, int> UM;

    for (int i = 0; i < n; i++) {
        cin >> data;

        if (US.find(data) == US.end()) {
            US.insert(data);
            UM.insert(make_pair(i + 1, data));
        }
    }

    if (US.size() >= k) {
        cout << "YES" << endl;

        unordered_map<int, int>::iterator it = UM.begin();
        stack<int> s;

        for (int i = 0; i < k; i++) {
            s.push(it->first);
            it++;
        }

        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}