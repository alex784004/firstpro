#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define rep(i,a,b)    for(ll int i=a;i<b;i++)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
   cin>>n;
   
   ll arr[100000]={0};
    ll temp;
    rep(i,0,n)
   {
     cin>>temp;
     arr[temp]++;
   }
   
cin>>n;
 rep(i,0,n)
   {
     cin>>temp;
  	arr[temp]==0? cout<<"NOT PRESENT" : cout<<arr[temp];
   cout<<endl;
   }
   
    return 0;
}

