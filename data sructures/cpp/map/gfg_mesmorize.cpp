// C++ program to print frequencies of all array 
// elements in O(1) extra space and O(n) time 
#include<bits/stdc++.h> 
using namespace std; 
void findCounts(int *arr, int n) 
{	int i = 0; 
	while (i<n+1) 
	{ 
		
		if (arr[i] < 0 || arr[i]==NULL) 
		{ 	cout<<1<<endl;
			i++; 
			continue; 
		
		} 

		// Find index corresponding to this element 
		// For example, index for 5 is 4 
		int elementIndex = arr[i]; 

		if (arr[elementIndex] >= 0 || arr[elementIndex]==NULL) 
		{ 
			arr[i] = arr[elementIndex]; 

			cout<<2<<endl;
			// After storing arr[elementIndex], change it 
			// to store initial count of 'arr[i]' 
			arr[elementIndex] = -1; 
		} 
		else
		{ 
			// If this is NOT first occurrence of arr[i], 
			// then decrement its count. 
			arr[elementIndex]--;   

			cout<<3<<endl;
			// And initialize arr[i] as 0 means the element 
			// 'i+1' is not seen so far 
			arr[i] =NULL; 
			i++; 
		} 
	} 

	printf("\nBelow are counts of all elements\n"); 
	for (int i=0; i<n; i++) 
		printf("%d -> %d\n", i, abs(arr[i]+1)); 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = {2, 3, 3, 2, 5}; 
	findCounts(arr, sizeof(arr)/ sizeof(arr[0]));     
	return 0; 
} 

