#include<bits/stdc++.h>
using namespace std;
bool SieveOfEratosthenes(long long n, bool isPrime[]) 
{ 
    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i <= n; i++) 
        isPrime[i] = true; 
  
    for (int p = 2; p * p <= n; p++) { 
        if (isPrime[p] == true) { 
            for (int i = p * 2; i <= n; i += p) 
                isPrime[i] = false; 
        } 
    } 
} 
  
// Function to print a prime pair 
// with given product 
int findPrimePair(long long n) 
{ 
    int flag = 0; 
  
    // Generating primes using Sieve 
    bool isPrime[10000]; 
      SieveOfEratosthenes(n, isPrime); 
      cout<<"fa";
    for (int i = 2; i < n; i++) { 
        int x = n / i; 
  
        if (isPrime[i] && isPrime[x] and x != i and x * i == n) {  
            return i; 
        } 
    } 
} 
int main()
{
int test_case;
cin>>test_case;
for(int i=0;i<test_case;i++)
{
int64_t pro,z,n;
	cin>>z;
	cin>>n;
	long long arr[n];
	for(int j=0;j<n;j++)
	cin>>arr[j];
	 long long a,b,c,d;
	
a=findPrimePair(arr[0]);
 c=arr[0]/a;
b=findPrimePair(arr[1]);
d=arr[1]/b;
	if(a==b ||a==d)
	pro=c;
	else
	pro=a;

	vector<long long> vec,vec2;
	vec.push_back(pro);
	vec2.push_back(pro);
	
	long temp;
	for(int j=0;j<n;j++)
	{ temp=arr[j]/pro;
	vec2.push_back(temp);
	if(find(vec.begin(), vec.end(), temp) == vec.end())
	vec.push_back(temp);
	pro=temp;
	cout<<temp<<" ";
	}
	cout<<endl;	
	sort(vec.begin(),vec.end());
	vector<long long>::iterator it;
int index;
for(int j=0;j<=n;j++)
{
it=find(vec.begin(),vec.end(),vec2[j]);
	index=distance(vec.begin(),it);
	
	cout<<char(index+65);
}
		
	
}
return 0;
}
