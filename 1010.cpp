#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n,m;
	while(t--)
	{
		int dp[34][34]={0};
		cin >> n >> m;
		for(int i=0;i<=m;i++)
			dp[1][i]=i;
		for(int i=2;i<=n;i++)
		{
			for(int j=i;j<=m;j++)
			{
				for(int k=j;k>=i;k--)
				{
					dp[i][j]+=dp[i-1][k-1];
				}
			}
		}
		cout << dp[n][m] << endl;
	}
	return 0;
}