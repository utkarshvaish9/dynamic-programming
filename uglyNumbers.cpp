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

vi ugly;
int main(){

	int counterForTwo = 0;
	int counterForThree = 0;
	int counterForFive = 0;
	int nextMultipleOfTwo = 2;
	int nextMultipleOfThree = 3;
	int nextMultipleOfFive = 5;
	inputInt(n);

	ugly.pb(1);
	int nextUglyNumber=1;
	for(int i=1;i<n;i++)
	{
		nextUglyNumber = min(nextMultipleOfTwo,min(nextMultipleOfFive,nextMultipleOfThree));
		ugly.pb(nextUglyNumber);
		if(nextUglyNumber == nextMultipleOfTwo)
		{
			counterForTwo++;
			nextMultipleOfTwo = ugly[counterForTwo]*2;
		}
		if(nextUglyNumber == nextMultipleOfThree)
		{
			counterForThree++;
			nextMultipleOfThree = ugly[counterForThree]*3;
		}
		if(nextUglyNumber == nextMultipleOfFive)
		{
			counterForFive++;
			nextMultipleOfFive = ugly[counterForFive]*5;
		}


	}
	cout<<ugly[n-1];

	return 0;
}