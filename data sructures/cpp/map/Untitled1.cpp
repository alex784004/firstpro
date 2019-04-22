#include<bits/stdc++.h>
using namespace std;
int add(vector <int> vec,vector <int> vec1)
{
	int h=(vec.size()+vec1.size());
	int u=h;
if(h%2==0)
h=h+1;
h=h/2;
vector<int> vec3;
int max=vec.size()<vec1.size() ? vec.size() :vec1.size();
int k=0,j=0,i=0;
for(k=0;k<h;k++)
{
	if(vec[i]<vec1[j])
	{
		vec3.push_back(vec[i]);
		i++;
		
	}
	else{
		vec3.push_back(vec1[j]);
		j++;
	}
	
}		
	if(u%2==0)
	return (vec3[h]+vec3[h-1])/2;
	else
	return vec3[h];
}
int main()

{
	
vector<int > vec,vec2;
int temp,temp1;
for(int i=0;i<5;i++)
{cin>>temp;
	vec.push_back(temp);
}
for(int i=0;i<5;i++)
{cin>>temp;
	vec2.push_back(temp);
}
	cout<<add(vec,vec2);
	
	
	return 0;
}
