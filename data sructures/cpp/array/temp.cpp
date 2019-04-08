#include<bits/stdc++.h>
using namespace std;
bool ispalin(string s)
{ 
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[s.length()-1-i])
		return false;
	}
	return true;
}
int main()
{
string s,sd;
getline(cin,s);
for(int i=0;i<s.length();i++)
if(isalpha(s[i]) )
sd+=tolower(s[i]);
else if(isdigit(s[i]))
sd+=s[i];
ispalin(sd)? cout<<"true": cout<<"false";
return 0;
}
