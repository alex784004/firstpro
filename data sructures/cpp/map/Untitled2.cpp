#include <bits/stdc++.h> 

using namespace std; 
/*bool diff(string s,int h,int u){

for(int i=h;i<=u;i++)
{
	for(int j=i+1;j<=u;j++)
	{
		if(s[i]==s[j])
		return false;
	}
}
return true;
}*/
/*
void print(string s,int h,int u)
{
	for(int i=h;i<=u;i++)
	{
		cout<<s[i];
	}
cout<<endl;
}*/
int teo(string s)
  
  {
  unordered_map<char, int> map;
  unordered_map<char, int> :: iterator itr;
  int max=0; int mai=0;int last=0;
for(int i=0;i<s.length();i++)
  { 
  	if(map.find(s[i])!=map.end())
	  {
			i=map.find(s[i])->second;	
			last=i+1;  	
	map.clear();

      }
else{      
            
	map.insert(make_pair(s[i],i));
	if(max <  i-last)
	max=i-last;
	}
 
  } 

 return max+1; 
 }



int main() 
{

 string a;
cin>>a;
cout<<teo(a);

}
