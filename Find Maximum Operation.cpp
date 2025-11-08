#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n,k,moves=0;
        cin>>n>>k;

        while(n>0){
            long long cur=1;

            if(k>n || k==1){
                moves+=n;
                break;
            }
            while(cur*k<=n){
                cur=cur*k;
            }
            n=n-cur;
            moves++;
        }
        cout<<moves<<endl;
    }
}
