#include <iostream>
using namespace std;

int main() {

  int t;
  cin>>t;

  while(t--)
  {
    long long n;
    cin >> n;

    long long sum_all=((n)*(n+1))/2;
    long long sum_two_pow=0;

    for(int i=1;i<=n;i*=2)
    {
       sum_two_pow+=i;
    }

    cout<<sum_all-(2*(sum_two_pow))<<endl;

  }
    

    return 0;
}
