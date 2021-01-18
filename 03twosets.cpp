#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    cin >> n;
    
    if (n <= 2) {
        cout << "NO\n";
        return 0;
    }

    long sum = (n * (n + 1))/2;
    if (sum & 1) {
        cout << "NO";
        return 0;
    }
    vector<long> v1;
    vector<long> v2;

    if (!(n & 1)) {
        int turn = 1;
        int start = 1;
        int last = n;
        while (start < last) {
            if (turn) {
                v1.push_back(start);
                v1.push_back(last);
                turn = 0;
            }
            else {
                v2.push_back(start);
                v2.push_back(last);
                turn = 1;
            }
            start++;
            last--;
        }
    } else {
        long rem = sum / 2;
 
        bool vis[(long)n + 1];
 
        for (int i = 1; i <= n; i++)
            vis[i] = false;
 
        vis[0] = true;
 
        for (int i = n; i >= 1; i--) {
            if (rem > i) {
                v1.push_back(i);
                vis[i] = true;
                rem -= i;
            }
 
            else {
                v1.push_back(rem);
                vis[rem] = true;
                break;
            }
        }
 
        for (int i = 1; i <= n; i++) {
            if (!vis[i])
                v2.push_back(i);
        }
    }

    cout << "YES\n" << v1.size() << "\n"; 
    for (unsigned int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << "\n" << v2.size() << "\n";
    for (unsigned int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << "\n";
    return 0;
}
