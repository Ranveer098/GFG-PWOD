
class Solution
{
public:
  int countPaths(int N)
  {

    long M = 1000000007;
    long O = 0, A = 1, B = 1, C = 1;
    for (int i = 2; i <= N; i++)
    {
      long ways2Origin = (A + B + C) % M;
      long ways2A = (O + B + C) % M;
      long ways2B = (O + A + C) % M;
      long ways2C = (O + B + C) % M;
      O = ways2Origin;
      A = ways2A;
      B = ways2B;
      C = ways2C;
    }
    return (int)O;
  }
};
