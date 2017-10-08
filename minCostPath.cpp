#include<bits/stdc++.h>

using namespace std;


#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fori(i, n) for(int i = 0; i < (int)(n); ++i)
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
#define cpresent(container, element) (find(all(container),element) != container.end())


vector <vector<int>> cost;
vector <vector<int>> ans;
int main()
{
	int row,column;
	cin>>row>>column;
	    cost.resize(column,vector<int>(row));
	    ans.resize(column,vector<int>(row));

	fori(i,row)
	{	fori(j,column)
		{
			cin>>cost[i][j];
		}
	}

	ans[0][0] = cost[0][0];
	for(int i=1;i<row;i++)
		ans[i][0] = ans[i-1][0] + cost[i][0];
	for(int j=1;j<column;j++)
		ans[0][j] = ans[0][j-1] + cost[0][j];
	for(int i=1;i<row;i++)
		for(int j=1;j<column;j++)
			ans[i][j]=  min(ans[i-1][j-1],min(ans[i][j-1],ans[i-1][j])) + cost[i][j];
	cout<<ans[row-1][column-1];
	


}