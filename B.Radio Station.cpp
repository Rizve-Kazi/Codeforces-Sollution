#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string s1, s2;
    string s3, s4;

    unordered_map<string, string> mp;
//    unordered_map<string, string> mp1;
    vector<string>v,v1;

    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        mp[s2] = s1;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> s3 >> s4;
        s4.pop_back();
        v.push_back(s4);
        v1.push_back(s3);
    }

    for (int i=0;i<m;i++)
    {
        string ip = v[i];
        string cmd = v1[i];

        if (mp.count(ip))
        {
            cout << cmd << " " << ip << "; #" << mp[ip] << endl;
        }
    }

    return 0;
}
