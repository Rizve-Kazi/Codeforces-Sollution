#include <bits/stdc++.h>
using namespace std;

bool found = false;
int n, element_sum;
vector<int> v;

void fact(int i, int total_sum) {
    if (i == n) {   
        if (total_sum == element_sum) {
            found = true;
        }
        return;
    }

    fact(i + 1, total_sum + v[i]);

    fact(i + 1, total_sum - v[i]);
}

int main() {
    cin >> n >> element_sum;
    v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    fact(1, v[0]);

    if (found) cout << "YES\n";
    else cout << "NO\n";
}
