#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a;
        cin >> a;  

        int m;
        cin >> m;

        string s1, s2;
        cin >> s1 >> s2;

        for (int i = 0; i < m; i++)
        {
            if (s2[i] == 'V')
            {
                a.insert(a.begin(), 1, s1[i]);
            }
            else
            {
                a.push_back(s1[i]);
            }
        }

        cout << a << endl;
    }
}
