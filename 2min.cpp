#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
float slope(int x1,int y1,int x2,int y2)
{
	float m=(x2-x1)/(y2-y1);
	return m;
}
int main()
{
//	unordered_map<int, int> map;
	int n,x,y;
	cin>>n>>x>>y;
	vector<int > vec;
	int x1[n],y1[n];
rep(i,0,n){
cin>>x1[i];
cin>>y1[i];
vec.push_back(slope(x,y,x1[i],y1[i]));
}
vector<int>:: iterator k;
int count; 
    sort(vec.begin(), vec.end()); 
count =distance(vec.begin(),unique(vec.begin(),vec.end())); 
cout<<count;
return 0;
}
