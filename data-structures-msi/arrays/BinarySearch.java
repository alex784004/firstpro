package arrays;

public class BinarySearch {

	public static int IterativeSerach(int[] arr,int start, int end, int x)
	{

		int mid=0;
		while(start<=end)
		{mid=(int)((end+start)/2);
		if(arr[mid]==x)
		return mid;	
		else if(arr[mid]<x)
		{start=start+1;
		}
		else if(arr[mid]>x)
		{
			end=end-1;
		}
			
		}
		return mid;
	}
	public static int RecursiveSerach(int[] arr,int start, int end,  int x)
	{
		 if (end >= start) { 
		int index=start+((start-end)/2);
		
		if(arr[index]==x)
			return index;
		else if(arr[index]>x)
		return RecursiveSerach(arr,index+1,end,x);
		
		return RecursiveSerach(arr,start,index-1,x);

		 }
	return -1;
	}
	
	
	public static void main (String[] args)
	{
		  int arr[] = { 2, 3, 4, 10, 40 }; 
		  int n=arr.length;
		  int x=10;
		  //int result = RecursiveSearch(arr, 0, n - 1, x);
		  int result = RecursiveSerach(arr, 0, n - 1, x);
	        if (result == -1) 
	            System.out.println("Element not present"); 
	        else
	            System.out.println("Element found at index " + result); 
	}
	
	
	
}
