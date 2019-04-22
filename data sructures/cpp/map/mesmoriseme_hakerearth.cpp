#include<bits/stdc++.h>
#define ll          long long
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    unordered_map<int,int> mpa;
    cin>>n;
    ll temp;
    vector<int> v;
    rep(i,0,n)
   {
   	cin>>temp;
   	if (mpa.find(temp) == mpa.end()) 
   	mpa.insert(make_pair(temp,1));
   	else
	mpa[temp]+=1;
   }
  int k;
  cin>>k;
  rep(i,0,k)
  {
  	cin>>temp;
  	if(mpa.find(temp) == mpa.end())
  	cout<<"NOT PRESENT";
  	else
  	cout<<mpa[temp];
  }
    return 0;
}

