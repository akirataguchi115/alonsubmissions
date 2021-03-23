#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> children;
    for (int i = 0; i < n; i++) {
        children.push_back(i + 1);
    }

    int count = 0;
    for (int i = 0; count < n; i+=2) {
        children.push_back(children[i]);
        cout << children[i + 1] << " ";
        count++;
    }
    cout << endl;
}