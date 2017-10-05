#include<bits/stdc++.h>

using namespace std;

#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define inputInt(n) int n;cin>>n
#define fori(i, n) for(int i = 0; i < (int)(n); ++i)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; --i)
#define for1(i, n) for(int i = 1; i <(int)(n); ++i)
#define LL 				long long
#define ULL 				unsigned long long
#define pii 				pair<int,int>
#define fi 				first
#define se 				second
#define vi 				vector<int>
#define psb 				push_back
#define ppb 				pop_back
#define sz(x)				(int)(x).size()
#define gc				getchar_unlocked
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vector


int main()
{
	inputInt(n);
	int arr[n+1],ans[n+1];
	fill_n(ans,n,1);
	fori(i,n)
		cin>>arr[i];
	for1(i,n)
	{
		fori(j,i)
		{
			if(arr[j]<arr[i])
				ans[i]=max(ans[i],1+ans[j]);
		}
	}
	sort(ans,ans+n);
	cout<<ans[n-1];

	return 0;
}
