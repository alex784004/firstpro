#include <bits/stdc++.h> 

using namespace std; 
bool diff(string s,int h,int u){

for(int i=h;i<=u;i++)
{
	for(int j=i+1;j<=u;j++)
	{
		if(s[i]==s[j])
		return false;
	}
}
return true;
}

void print(string s,int h,int u)
{
	for(int i=h;i<=u;i++)
	{
		cout<<s[i];
	}
cout<<endl;
}

int teo(string s)
  { int i=0,max=0,j=0;
  	while(j<s.length())
  	{
  		if((s[i]==s[j] && i!=j)|| !diff(s,i,j))
  		{
  			i=i+1; 
  			j=i;
  
  		}
  else{

  		if(max<j-i+1 && diff(s,i,j))
  		max=j-i+1; 
  		
		j++;
  		
}
  		
  	}
 
 return max; }
int main() 
{

 string a;
cin>>a;
cout<<diff(a,0,a.length()-1);
cout<<teo(a);

}
