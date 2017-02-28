#include<bits/stdc++.h>

using namespace std;

int n;
int main()
{
	cin>>n;
	int arr[n+1],ans[n+1];
	fill_n(ans,n,1);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i])
				ans[i]=max(ans[i],1+ans[j]);
		}
	}
	sort(ans,ans+n);
	cout<<ans[n-1];

	return 0;
}