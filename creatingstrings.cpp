#include<bits/stdc++.h>
using namespace std;
 
set<string> permutations;
 
void permute(int i, string s)
{
    if (i == (int)(s.length() - 1)) {
        permutations.insert(s);
        return;
    }
   
    char prev = '*';
   
    for (int j = i; j < (int)s.length(); j++) {
        string temp = s;
        if (j > i && temp[i] == temp[j])
            continue;
        if (prev != '*' && prev == s[j]) {
            continue;
        }
       
        swap(temp[i], temp[j]);
        prev = s[j];
       
        permute(i + 1, temp);
    }
}
 
int main()
{
    string s;
    cin >> s;
     
    sort(s.begin(), s.end());
   
    permute(0, s);
    cout << permutations.size() << endl;
    for (string permutation : permutations) cout << permutation << endl;
    return 0;
}