#include <bits/stdc++.h>

using namespace std;

void change(int k, int u) {

}

int getSum(int a, int b) {
    return 666;
}

int main() {
    int n, q;
    cin >> n >> q;
    int tree[2 * n];
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        tree[i] = x;
    }

    int a, b;
    for (int i = 0; i < q; i++) {
        cin >> x >> a >> b;
        if (x == 1) {
            change(a, b);
        } else {
            cout << getSum(a, b) << "\n";
        }
    }
}
