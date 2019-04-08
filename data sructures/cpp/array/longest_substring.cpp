#include<bits/stdc++.h>
using namespace std;


	int lengthOfLongestSubstring(string s) {
        int n = s.length();
        hash<char> set;
        int ans = 0, i = 0, j = 0;
        while (i < n && j < n) {
            // try to extend the range [i, j]
            if (!set.contains(s[j])){
                set.add(s[j++]);
                ans = max(ans, j - i);
            }
            else {
                set.remove(s[i++]);
            }
        }
        return ans;
    }
int main()
{
	string s;
	cin>>s;
	
	 cout<<lengthOfLongestSubstring(s);
	
	
	
	
	return 0;
} 

