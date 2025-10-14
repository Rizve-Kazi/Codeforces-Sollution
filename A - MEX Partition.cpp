// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> s;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        int m = s.size();

        vector<int> v; 
        for (auto x : s) v.push_back(x); 

        sort(v.begin(), v.end());

        int flag = 0;
        int ans = -1;

        for (int i = 0; i < m; i++) {
            if (v[i] != i) {
                ans = i;
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            cout << ans << endl;
        } else {
            cout << v[m - 1] + 1 << endl;
        }
    }
}
