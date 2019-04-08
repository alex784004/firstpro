#include <bits/stdc++.h> 
using namespace std; 
  
// Function to generate all prime 
// numbers less than n 
bool SieveOfEratosthenes(long n, vector<bool> isPrime) 
{ 
    isPrime.push_back(false);
	isPrime.push_back(false); 
    for (long i = 2; i <= n; i++) 
        isPrime.push_back(true); 
       
  
    for (long p = 2; p * p <= n; p++) { 
        if (isPrime[p] == true) { 
            for (long i = p * 2; i <= n; i += p) 
                isPrime.push_back(false); 
        } 
    } 
} 
  
// Function to print a prime pair 
// with given product 
void findPrimePair(long n) 
{ 
    int flag = 0; 
    
    // Generating primes using Sieve 
  vector<bool> isPrime; 
   
    SieveOfEratosthenes(n, isPrime); 
  
    // Traversing all numbers to find first 
    // pair 
    for ( long i = 2; i < n; i++) { 
        long x = n / i; 
  
        if (isPrime[i] && isPrime[x] and x != i and x * i == n) { 
            cout << i << " " << x; 
            flag = 1; 
            return; 
        } 
    } 
  
    if (!flag) 
        cout << "No such pair found"; 
} 
  
// Driven Code 
int main() 
{ 
    long n = 3292937; 
  
    findPrimePair(n); 
  
    return 0; 
} 
