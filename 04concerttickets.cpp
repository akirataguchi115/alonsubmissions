#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset <int, greater <int>> ms;
    vector<int>t(m);
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ms.insert(x);
    }
    for (auto& x : t) cin >> x;
    
    for (int i = 0; i < t.size(); i++) {
        set<int>::iterator bestoffer = ms.upper_bound (t[i] + 1);
        if (bestoffer == ms.end()) {
            cout << "-1\n";
        } else {
            cout << *bestoffer << "\n";
            ms.erase(bestoffer);
        }
    }
}
