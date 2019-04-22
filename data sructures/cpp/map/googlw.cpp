#include<bits/stdc++.h>
#define pb push_back
using namespace std;

/*bool check(int arr[][])
{
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<size;i++)
{
	if(arr[i]!=0)
	return false;
}
	return true;
} 
*/
int main()
{

int a,test_case,b;
	vector<int> vec;
	vector<int> vec1;
	 int mid_r,mid_c;
	 cin>>test_case;
	for(int i=0;i<test_case;i++)
	{
		cin>>a;
		cin>>b;
			int arr[a][b];
	
	mid_r=(a/2)+1;
	mid_c=(b/2)+1;
	
		if(a==b || mid_r==mid_c || mid_r==1 || mid_c==1)
		{
			cout<<"Case #"<<i+1<<" : IMPOSSIBLE"<<endl;
		
		}
		else{
		
	cout<<"Case #"<<i+1<<" : POSSIBLE"<<endl;
	
	int a_c,b_c;
	if(a%2==0)
	a_c=a/2;
	else 
	a_c=(a/2)+1;
	if(b%2==0)
	b_c=b/2;
	else
	b_c=(b/2)+1;
	
for(int i=0;i<a_c;i++)
{ for(int j=0;j<b;j++)
{

cout<<(mid_r+i)<< " ";
if((mid_c+j)%b==0)
cout<<b;
else
cout<<((mid_c+j)%b);
cout<<endl;


cout<<i+1<<" "<<j+1<<endl;
}
}

}




}
	

	return 0;
	}
