#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		
		int n;
		cin>>n;
		int no=0;
		int h=0,j=-1,lol=0;
		int kho=0;int dist=0;
		while(no<n)
		{   h++;
			j++;
			no+=h;
			dist+=h;
			//kho+=h;
			if(no>=n)
			break;
		dist+=j;
			no-=j;		
		}
		int ko=no-n;
		cout<<dist-ko<<endl;
		
	}
	
	return 0;
	
	
	
}
