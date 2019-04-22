#include<bits/stdc++.h>
using namespace std;
int big(int k)
{ int y=log2(k);
return (y==log2(k) ? log2(k) : y++);
}
int main()
{
	int y=0;
	cin>>y;
for(int jo=0;jo<y;jo++)
{
	
	int n;
	
	cin>>n;
	int temp;
	vector<int> vec;
	for(int i=0;i<n;i++)
	
	{
		cin>>temp;
		vec.push_back(temp);
		
	}
	
	int u=big(n+1);
	sort(vec.begin(),vec.end(),greater<int>());
	int sum=0;
	for(int i=0;i<u;i++)
	{
	sum+=vec[i];
	}
	cout<<sum<<endl;
}
	return 0;
}
