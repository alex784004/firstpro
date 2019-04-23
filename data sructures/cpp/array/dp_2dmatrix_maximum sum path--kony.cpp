#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define sep(i,a,b)    for(ll int i=a;i>=b;i--) 

using namespace std;
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n;
cin>>n;
int arr[n][n],arr1[n][n];
rep(i,0,n)
{
	rep(j,0,n)
	{
		cin>>arr[i][j];
	}
}   
rep(i,0,n)
{
	arr1[i][-1]=0;
	arr1[-1][i]=0;
}
rep(i,0,n)
{
	rep(j,0,n)
	{
		arr1[i][j]=max(arr1[i-1][j],arr1[i][j-1])+arr[i][j];
	}
}   int i=n-1,j=n-1           ;
int sum=0;
rep(i,0,n)
{
	arr1[i][-1]=0;
	arr1[-1][i]=0;
}
while(i>0 || j>0)
	{ 
	cout<<i<<" "<<j<<endl	;
	 if(arr1[i-1][j]>=arr1[i][j-1])
	    {
	    sum+=arr[i-1][j];
	    cout<<arr[i-1][j]<<endl;
	i=i-1;
	}
	    else
	{
	    sum+=arr[i][j-1];
	    cout<<arr[i][j-1]<<endl;
	    j=j-1;
	}
	}
cout<<sum+arr[n-1][n-1];
    return 0;
}


