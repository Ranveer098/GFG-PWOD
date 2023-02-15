#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int BasicDataType(string s)
  {
    // code here
    int l = s.size();
    if (l == 1)
    {
      if (s[0] >= '0' && s[0] <= '9')
        return 4;
      else
        return 1;
    }
    for (int i = 0; i < l; i++)
    {
      if (s[i] == '.')
      {
        if ((l - i - 1) < 6)
          return 4;
        return 8;
      }
    }
    return 4;
  }
};

int main()
{
  int t;
  cin>> t;
  while (t--)
  {
string s;
cin>> s;
Solution ob;
cout<<ob.BasicDataType(s)<<endl;
  
  }
}
