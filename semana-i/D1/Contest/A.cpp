#include <iostream>
#include <unordered_map>
using namespace std;

int main () {
    int n, t, s, d;

    cin >> n >> t;

    int ans;
    unordered_map<int, int> UM;

    for (int i = 0; i < n; i++) {
        cin >> s >> d;

        int time = s;

        if (time >= t) {
            UM.insert(make_pair(i + 1, time));
        }
        else {
            while (time < t) {
                time += d;
            }

            UM.insert(make_pair(i + 1, time));
        }
    }

    unordered_map<int, int>::iterator it = UM.begin();

    ans = it->first;
    int smallest = it->second;

    for (unordered_map<int, int>::iterator it = UM.begin(); it != UM.end(); it++) {
        //cout << it->first << " " << it->second << endl;

        if (smallest > it->second) {
            ans = it->first;
            smallest = it->second;
        }
    }

    cout << ans << endl;

    return 0;
}