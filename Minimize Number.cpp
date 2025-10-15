// Source: https://usaco.guide/general/io
#include <bits/stdc++.h>
using namespace std;

int main() {

    int len;
    cin >> len;
    vector<int> v(len);

    for (int i = 0; i < len; i++) cin >> v[i];
    
    int ans = 0;

    while (true)
    {
        int cnt = 0;

        for (int i = 0; i < len; i++)
        {
            if (v[i] % 2 == 0)
            {
                v[i] /= 2;
            }
            else
            {
                cnt++;
            }
        }

        if (cnt > 0)
        {
            break;
        }

        ans++;
    }
    
    cout << ans << endl;
    
    return 0;
}
