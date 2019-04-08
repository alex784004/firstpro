#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int sum1=0,sum2=0;
        while(l1!=NULL)
        {
   sum1= sum1*10 +  l1->val;        
        l1=l1->next;}
         while(l2!=NULL)
        {
   sum2=sum2*10 + l2->val;             
        l2=l2->next;    
        }
    cout<<sum1+sum2; 
    int a;
	ListNode * l3;
	while(sum1!=0)
	{a=sum1%10;
	sum1=sum1/10;
		
	}   
    
	}



int main()
{
struct ListNode* head = NULL;
	struct ListNode* second = NULL; 
  struct ListNode* third = NULL;
	head  = (struct ListNode*)malloc(sizeof(struct ListNode));  
  second = (struct ListNode*)malloc(sizeof(struct ListNode)); 
  third  = (struct ListNode*)malloc(sizeof(struct ListNode)); 
   
  head->val = 1; //assign data in first node 
  head->next = second; // Link first node with second    
   
  second->val = 2; //assign data to second node 
  second->next = third;   
   
  third->val = 3; //assign data to third node 
  third->next = NULL; 
	addTwoNumbers(head,head);
	return 0;
}
