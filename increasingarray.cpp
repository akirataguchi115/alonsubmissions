#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    long long moves = 0;
    cin >> n;
    vector<long long> v(n);
    string x;
    int i = 0;
    while(cin >> x) {
        v[i] = stoi(x); 
        i++;
    }
    for (unsigned int i = 1; i < v.size(); i++) {
        if (v[i - 1] > v[i]) {
           moves += v[i - 1] - v[i]; 
           v[i] += v[i-1] - v[i];
        }
    }
    cout << moves << "\n";
}
