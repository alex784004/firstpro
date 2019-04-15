#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
int tt;
cin>>tt;
for(int i=0;i<tt;i++){
	long double a,b,c,p;
	cin>>a>>b>>c>>p;
	long double k=(a*2)/c;
long long area=((b+c)*k)/2;

cout<<area*p<<endl;
}

	return 0;
}