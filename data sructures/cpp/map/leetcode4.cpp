#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int maximum(int a, int b)  
{ return a > b ? a : b; } 
int minimum(int a, int b)  
{ return a < b ? a : b; } 

double findMedianSortedArrays(int *a, int n,  
                              int *b, int m) 
{ 
      
    int min_index = 0, max_index = n, i, j, median; 
      
    while (min_index <= max_index) 
    { 
        i = (min_index + max_index) / 2; 
        j = ((n + m + 1) / 2) - i; 
      
       
        if (i < n && j > 0 && b[j - 1] > a[i])         
            min_index = i + 1; 
        else if (i > 0 && j < m && b[j] < a[i - 1])         
            max_index = i - 1; 
   else
        { 
            if (i == 0)             
                median = b[j - 1];             
            else if (j == 0)             
                median = a[i - 1];             
            else            
                median = maximum(a[i - 1], b[j - 1]);             
            break; 
        } 
    } 
      
    if ((n + m) % 2 == 1) 
        return (double)median; 
  
    if (i == n) 
        return (median+b[j]) / 2.0; 
          
    if (j == m) 
        return (median + a[i]) / 2.0; 
      
    return (median + minimum(a[i], b[j])) / 2.0; 
} 

int add(vector<int>vec,vector<int>vec2)
{
	n=vec.size();
	m=vec2.size();
 if (n < m) 
    return findMedianSortedArrays(vec, n, vec2, m); 
    else
        
             return findMedianSortedArrays(vec2, m, vec, n); 
  
		
	}
	
}













int main()
{int a,b;
	vector<int> vec;
	vector<int> vec1;
	int temp;
	for(int i=0;i<a;i++)
	{cin>>temp;
		vec.pb(temp);
	}
		for(int i=0;i<b;i++)
	{
		vec1.pb(temp);
	}
	add(vec,vec1);
	return 0;}
