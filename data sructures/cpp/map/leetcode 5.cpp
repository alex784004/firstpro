#include<bits/stdc++.h>
using namespace std;
bool ispalin(string s)
{ int n=s.length();
	for(int i=0;i<(n/2)+1;i++)
{
	if(s[i]!=s[n-i-1])
	return false;
}
return true;
}
 string longestPalindrome(string s) {
int max=0; string cool;
 
 for(int i=0;i<s.length();i++)
 {
   string k="";

 	for(int j=i+1;j<s.length();j++)
 	{ k+=s[j];
 		if(ispalin(k))
 		{
 		if(max<k.length())
	 	cool=k;	
 		}
 		else{
 			break;
 		}
 	}
 }
 return cool;
 
 
 }

int main()
{
	string l; 
	cin>>l;
	cout<<longestPalindrome(l);
	return 0;
}

