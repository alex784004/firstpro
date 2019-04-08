//a function to sort an array such that first element is first maximum and second element is first minimum and so on.
#include<bits/stdc++.h>
using namespace std;
void alternative_sort(int arr[],int n)
{int i=0;
	sort(arr,arr+n);
	for(i=0;i<n/2;i++){
		cout<<arr[i]<<" ";
		cout<<arr[n-i-1]<<" ";
	}
	 if (n % 2 != 0) //if n is odd printing the middle element
        cout << arr[i]; 
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	alternative_sort(arr,n);
	return 0;
}
