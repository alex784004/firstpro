#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define mod        1000000007
#define inf 1000000000000000001;
#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define sep(i,a,b)    for(ll int i=a;i>=b;i--)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair

using namespace std;

vector<int> parseInts(string (str)) {
	// Complete this function
    stringstream ss(str);//defining an input stream
int a, b, c;
char ch;
vector<int> r; 
    while (ss>>a){
      r.pb(a);
      ss>>ch;
      
           
	 }

return r;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
