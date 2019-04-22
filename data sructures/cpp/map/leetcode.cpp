#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	unordered_map<char , int> map;
	cin>>a;
	for(int i=0;i<a.length();i++)
{
if(map.find(a[i])!=map.end())
map.erase(a[i]);	
	map.insert(make_pair(a[i],i));
}
auto k=map.begin();
cout<<"begin "<<k->first<<" "<<k->second<<endl;
	  for(auto x : map) 
      cout << x.first << " " << x.second << endl; 
	
	
	
	return 0;
}
