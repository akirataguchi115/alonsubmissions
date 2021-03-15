#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    int comp[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> x;
        comp[x] = i;
    }

    int rounds = 1;
    for (int i = 0; i < n; i++) {
        if (comp[i] > comp[i+1]) {
            rounds++;
        } 
    }
    cout << rounds << "\n";
}
