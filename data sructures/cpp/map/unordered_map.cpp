#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{int temp;
	unordered_map<char> umap;
	for(int i=0;i<5;;i++)
	{
	cin>>temp;
	umap.insert(temp);
}
int h;
cin>>h;

cout<<(umap.find(h)!=umpa.end());
	
	return 0;
}
