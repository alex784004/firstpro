#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    vector <int> lo;
    sort(nums.begin(),nums.end());
        int sum;
        int i=0,j=1;
        while(i<nums.size())
            {
            sum=nums[i]+nums[j];
            cout<<sum<<endl;
            if(sum==target)
            {
                lo.push_back(i);
                lo.push_back(j);
                cout<<i<<" "<<j;
                return lo;
            }
            else{ 
                  if(sum<target)
                  {
                        ++j;
                  }
                     else
                     {
                     ++i;
                       }
                  }
        }
         return lo;   }
int main()
{



 vector<int> two;
 two.push_back(3);
 two.push_back(2);
 two.push_back(3);
int s=6;
 twoSum(two,s);

	return 0;
}
