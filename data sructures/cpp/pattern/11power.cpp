#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	int o=11;
	 for(int i=0;i<n;i++)
 	{ for(int j=0;j<n-i-1;j++)
 	cout<<" ";
 	
 		int k=powl(o,i);
 	
	 while(k>0)
	 {
	 	int y=k%10;
	 	cout<<y<<" ";
	 	k=k/10;
	 }
	 cout<<endl;
 	}
 	
 	return 0;
 }
