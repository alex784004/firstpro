#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test_case;
	cin>>test_case;
	string temp;
	for(int i=0;i<test_case;i++)
	{
		string ans;
	int temp2;
	cin>>temp2;
	cin>>temp;
	
	for(int j=0;j<temp.length();j++)
	{
		if(temp[j]=='S')
		ans=ans+'E';
		else
		ans+='S';
	}
	cout<<"Case #"<<i+1<<": "<<ans<<endl;
	}return 0;
	
}
