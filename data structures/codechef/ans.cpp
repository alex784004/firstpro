#include<bits/stdc++.h>
struct Node{
node* next;
int data;
};

node* merge(node* a,node* b)
{
 
if(a==NULL)
return b;
if(b==NULL)
return a;

node* res;
if(a->val<b->val)
{
res=a;
res->next=merge(a->next,b);
}
else{

res=b;
res->next=merge(a,b->next);
}
return res;
}

void push(struct Node** head_ref, int new_data) 
{ 
       struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   
    /* 2. put in the data  */
    new_node->data  = new_data; 
   
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref); 
   
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node; 
} 



int main()
{

node *head,*head1;
node *ans;

push(*head,1);
push(*head,3);
push(*head,5);

push(*head1,2);
push(*head1,4);
push(*head1,6);

ans=merge(*head,*head1);

  { 
     printf(" %d ", node->data); 
     node = node->next; 
  }  

return 0;
}
