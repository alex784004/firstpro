 #include<bits/stdc++.h>
 using namespace std;
 
   struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
 
 int rev(int bin)
    { int remainder=0,reversedNumber=0;
    
        while(bin != 0)
    {
        remainder = bin%10;
        reversedNumber = reversedNumber*10 + remainder;
        bin /= 10; }  
        return bin;
    }
    
int main()
{
	ListNode* l1,*l2,*l3;
	l1->next=l2;
	l1->val=1;
	l2->next=l3;
	l2->val=2;
	l3->next=NULL;
	l3->val=3;
	
	cout<<addTwoNumbers(l1,l2);
	
	return 0;
}
