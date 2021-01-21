#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    long res = 1;
    for (int i = 0; i <n && v[i] <= res; i++) {
        res = res + v[i];
    }
    cout << res << "\n";
}
