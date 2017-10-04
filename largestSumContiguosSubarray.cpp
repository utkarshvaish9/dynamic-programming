#include<bits/stdc++.h>

using namespace std;


#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fori(i, n) for(int i = 0; i < (int)(n); ++i)
#define forj(j, n) for(int j = 0;i < n; ++j) 
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; --i)
#define for1(i, n) for(int i = 1; i <= (int)(n); ++i)
#define inputInt(n) int n;cin>>n
#define inputDouble(n) double n;cin>>n
#define inputString(n) string s;cin>>s
#define LL 					long long
#define ULL 				unsigned long long
#define pii 				pair<int,int>
#define fi 					first
#define se 					second
#define vi 					vector<int>
#define psb 				push_back
#define ppb 				pop_back
#define sz(x)				(int)(x).size()
#define gc					getchar_unlocked
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vector

vector<int> vec;
int main()
{
	inputInt(n);
	fori(i,n)
	{
		inputInt(a);
		vec.pb(a);
	}
	int arr[n],max_sum;
	arr[0] = vec[0];
	for1(i,n)
		arr[i] = max(vec[i],arr[i-1]+vec[i]);
	sort(arr,arr+n);
	cout<<arr[n-1];
	return 0;


}