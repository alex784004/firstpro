#include<bits/stdc++.h>
#include<unordered_map> 
using namespace std;
int main()
{

unordered_map<char,int>umap;

string a;
int j=0;
cin>>a;
for(int i=0;i<a.length();i++)
{ if (umap.find(a[i]) == umap.end())
	{
		umap.insert(make_pair(a[i],j++));
	}

	}
cout<<j<<endl;
	return 0;
}