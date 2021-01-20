#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.second < b.second);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    int x;
    for (int i = 0; i < n; i++) {
        int start;
        int end;
        cin >> start;
        cin >> end;
        v.push_back({start,end});
    }
    
    int movies = 1;
    int last = 0;
    sort(v.begin(), v.end(), sortbysec);
    for (int i = 1; i < n; i++) {
        if (v[i].first >= v[last].second) {
           movies++;
           last = i;
        } 
    }
    cout << movies << "\n";
}
