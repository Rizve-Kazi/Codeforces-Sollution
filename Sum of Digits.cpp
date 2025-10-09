#include<iostream>
using namespace std;

int solve(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int m = n % 10;  
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}

int main() {

  string s;
  cin >> s;

  int ans = 0;

  if(s.size()==1 && s[0]=='0')
  {
    cout<<0<<endl;
    return 0;
  }

  if(s.size() == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  int sum_of_digit = 0;

  for(int i = 0; i < s.size(); i++)
  {
     sum_of_digit = sum_of_digit + (s[i] - '0');
  }
  
  int n = sum_of_digit;
  ans++;
   
  while(n > 9)  
  {
      n = solve(n);
      ans++;
  }

  cout << ans << endl;

  return 0;
}
