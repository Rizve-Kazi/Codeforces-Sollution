// Source: https://usaco.guide/general/io
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    
    while (test_case--) {
        int len;
        cin >> len;
        vector<int> v(len);
        
        for (int i = 0; i < len; i++) cin >> v[i];

        for (int l = 0; l < len; l++) {
            for (int r = l; r < len; r++) {
                long long max_value = LLONG_MIN;
                for (int k = l; k <= r; k++) {
                    max_value = max(max_value, (long long)v[k]);
                }
                cout << max_value << " ";
            }
        }
        cout << endl;
    }
}
