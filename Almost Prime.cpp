#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     int ans=0;

     for(int i=2;i<=a;i++)
     {
          int c=0;

          for(int j=2;j<=i;j++)
          {
               if(i%j==0)
               {
                    bool prime=true;

                    for(int k=2;k*k<=j;k++)
                    {
                         if(j%k==0)
                         {
                              prime=false;
                              break;
                         }
                    }

                    if(prime) c++;
               }
          }

          if(c==2)
          {
               ans++;
          }
     }

     cout<<ans<<endl;
}
