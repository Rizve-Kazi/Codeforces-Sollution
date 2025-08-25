#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        vector<long long int> v;

        if (n > 1e18)
        {
            cout << 0 << endl;
            continue;
        }

        long long int ten = 10;
        for (int k = 1; k <= 18; k++)
        {
            long long int m = ten + 1;
            if (n % m == 0)
            {
                long long int x = n / m;
                v.push_back(x);
            }

            ten *= 10;
        }

        if (v.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            cout << v.size() << endl;

            reverse(v.begin(), v.end());

            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}
