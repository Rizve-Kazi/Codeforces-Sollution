// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--)
    {
        int a;
        cin>>a;

        vector<int>v(a);

        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int c=1;

        for(int i=0;i<a-1;i++)
        {
            if(v[i+1]>v[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
