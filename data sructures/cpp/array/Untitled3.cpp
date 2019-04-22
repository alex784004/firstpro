#include<bits/stdc++.h>
using namespace std;
int main()
{int y,n;
cin>>y;
	
for(int jo=0;jo<y;jo++)
{	cin>>n;
	int temp;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
	cin>>temp;
	vec.push_back(temp);	
	}
	

	int u=(floor(log2(n+1))==ceil(log2(n+1)) ? log2(n+1) : int(log2(n+1)+1));
	sort(vec.begin(),vec.end());
	int sum=0;
	for(int i=n-1;i>n-1-u;i--)
	sum+=vec[i];
	cout<<sum<<endl;
}
	return 0;
}
