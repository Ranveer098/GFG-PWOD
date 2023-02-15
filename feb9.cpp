#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maximumMatch(vector<vector<int>> &G)
  {
   
    int n = G[0].size();
    int m = G.size();
    vector<int> visit(n, -1);
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
      vector<bool> seen(n, false);
      if (dfs(G, i, seen, visit))
        ans++;
    }
    return ans;
  }

  bool dfs(vector<vector<int>> &g, int src, vector<bool> &seen, vector<int> &visit)
  {
    for (int i = 0; i < g[0].size(); i++)
    {
      if (g[src][i] == 1 && !seen[i])
      {
        seen[i] = true;
        if (visit[i] < 0 || dfs(g, visit[i], seen, visit))
        {
          visit[i] = src;
          return true;
        }
      }
    }
    return false;
  }
};


int main(){
  int tc;
  cin>>tc;
  while(tc--){
  int m,n;
  cin>>m>>n;
  vector<vector<int>>G(m,vector<int>(n,0));
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; i < n; j++)
  {

    cin>>G[i][j];
  }
  }
  Solution obj;
  int ans=obj.maximumMatch(G);
  cout<<ans<<"\n";
  }
return 0;
  
}
