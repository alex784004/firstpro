package arrays;
class linearSearch{
	public static int search(int[] arr, int x)
	{int index=-1;
	 for (int i=0;i<arr.length;i++)
	{
		if(arr[i]==x)
			{
			index=i;
			break; 
			}
	}
		
		return index;
	}
	
public static void main (String args[])
{

int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
int x=50;

int result = search(arr, x); 
if(result>=0)
{
	System.out.println("item is found on "+ result +" index");
}
else 
{
	System.out.println("item is not found");
}
}
}
