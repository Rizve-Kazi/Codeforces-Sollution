#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int j=0,x=1;
        for(int i=n-1; i>=0; i--)
        {
            if(x*a[i]<=c)
            {
                x*=2;
                j++;
            }
        }
        cout<<n-j<<endl;
    }
}
