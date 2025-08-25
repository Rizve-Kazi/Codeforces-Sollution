#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        set<int> st;
        int n;
        cin >> n;
        for(int i=1,a; i<=n; ++i)
        {
            cin >> a;
            st.insert(a);
        }
        if(st.size() != n)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }



}
