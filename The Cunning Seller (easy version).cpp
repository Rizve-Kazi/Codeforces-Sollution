#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;


    while(t--)
    {
        long long int n,m,ans=0;
        cin>>n;

        
        while(n!=0)
        {
            long long int x=0;
             m=n;

            while(m>=3)
            {
                 m=m/3;
                 x++;
                
            }
             n=n-pow(3,x);
            ans=ans+(pow(3,x+1))+x*(pow(3,x-1));
        }
        cout<<ans<<"\n";
    }
    
}
 
