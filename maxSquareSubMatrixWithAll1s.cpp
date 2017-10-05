#include<bits/stdc++.h>

using namespace std;

#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define inputInt(n) int n;cin>>n
#define fori(i, n) for(int i = 0; i < (int)(n); ++i)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; --i)
#define for1(i, n) for(int i = 1; i <= (int)(n); ++i)
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

int main()
{
	inputInt(row);
	inputInt(column);
	int realArray[row][column];

	fori(i,row)
		fori(j,column)
			cin>>realArray[i][j];
	int sumArray[row][column];

	fori(i,row)
    	sumArray[i][0] = realArray[i][0];
    fori(j,column)
    	sumArray[0][j] = realArray[0][j];
    for1(i,row)
    	for1(j,column)
    		{
    			if(realArray[i][j]==1)
    				sumArray[i][j]= min(sumArray[i][j-1],min(sumArray[i-1][j],sumArray[i-1][j-1]))+1;
    			else
    				sumArray[i][j] = 0;
    		}

    int maxOfSumArray = sumArray[0][0]; 
    int maxI = 0; 
    int maxJ = 0;
    fori(i,row)
    {
    	fori(j,column)
    	{
      		if(maxOfSumArray < sumArray[i][j])
      		{
         		maxOfSumArray = sumArray[i][j];
         		maxI = i; 
         		maxJ = j;
      		}        
    	}                 
  	}     
   
  	cout<<"Maximum size sub-matrix is:"<<endl;
  	for(int i = maxI; i > maxI - maxOfSumArray ;i--)
  	{
    	for(int j = maxJ; j > maxJ - maxOfSumArray; j--)
    	{
      		cout<<realArray[i][j];
    	}  
    	cout<<endl;
  	}  
}