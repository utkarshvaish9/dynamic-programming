#include<bits/stdc++.h>

using namespace std;

int t,k,n;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int arr[n],ans;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int T[n+1][k+1];

		for(int i=0;i<n;i++)
		{
			//int a = k/arr[i];
			for(int j=0;j<=k;j++)
			{
				if(j==0)
					T[i][j]=0;
				else if(j%arr[i]==0)
					T[i][j]=1;
				else if(T[i-1][j]==1)
					T[i][j]=1;
				else if(T[i-1][j-arr[i]]==1)
					T[i][j]=1;
				else
					T[i][j]=0;
			}
		}
		for(int i=k;i>=0;i--)
		{
			if(T[n-1][i]==1)
				{
					ans=i;
					break;
				}
		}
		cout<<ans<<endl;
	}
	return 0;
}