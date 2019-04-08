#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test_case;
	cin>>test_case;
	int temp;
	for(int i=0;i<test_case;i++)
	{
	cin>>temp;
	int first=temp,mod,sec=0,pos=1;
	while(temp!=0)
	{
		mod=temp%10;
		if(mod==4)
		{
			sec+=1*pos;
			first=first-(1*pos);
		}
		temp=temp/10;
		pos=pos*10;
		
	}
	cout<<"Case #"<<i+1<<" "<<first<<" "<<sec<<endl;
	}return 0;
	
}
