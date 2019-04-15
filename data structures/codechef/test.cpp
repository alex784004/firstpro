#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int coun=0;
string cont(string s)
{int k=0;
	for(int i=0;i<s.length();i++)
		{
			if(s[i]=='*'){
				s[i]='a';
		k=1;		
			}

		}
		if(k==1)
		coun++;
		return s;
}
int main()
{
	vector<string>vec;
	string temp;
	int a,rank=1;
	cin>>a;
	string str="Razo";
	for(int i=0; i<a;i++)
	{
		cin>>temp;
		temp=cont(temp);

if( lexicographical_compare(temp[0],temp[0]+temp.length(), str[0], str[0]+4)) 
	rank++;
}
for(int i=rank-coun;i<rank;i++)
	cout<<i<<" ";
		return 0;
}