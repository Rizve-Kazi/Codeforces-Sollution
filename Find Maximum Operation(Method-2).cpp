#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t; cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        if(k==1){
            cout<<n<<endl;
            continue;
        }

        long long ans = 0;

        while(n > 0){
            ans += n % k;
            n /= k;
        }

        cout << ans << endl;
    }
}
