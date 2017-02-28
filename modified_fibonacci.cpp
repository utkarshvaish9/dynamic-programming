#include<bits/stdc++.h>

using namespace std;

int a,b,c;
 arr[23];
int main()
{
	cin>>a>>b>>c;
	arr[0] = a;
	arr[1] = b;

	for(int i =2;i<=c;i++)
		arr[i] = arr[i-2] + pow(arr[i-1],2);
	cout<<arr[c-1];
	return 0;
}