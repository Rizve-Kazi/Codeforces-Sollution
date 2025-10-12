#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int a = 0, b = 0, c = 0;

        a = (a | x);
        b = (b | x);

        b = (b | y);
        c = (c | y);

        a = (a | z);
        c = (c | z);

        if ((a & b) == x && (b & c) == y && (a & c) == z)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
