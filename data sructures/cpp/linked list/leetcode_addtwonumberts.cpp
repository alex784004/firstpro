 #include<bits/stdc++.h>
 using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
/*void push(ListNode** l3 , int new_data) 
{ 
    
    struct ListNode* new_node = new ListNode(sum1); 
  
   
    new_node->val = new_data; 
  
    new_node->next = (*l3); 
  
    (*l3) = new_node; 
}*/ /*
    ListNode* push(ListNode* l3,int x)
    {
       ListNode* new_node; 
        while(l3->next!=NULL)
        l3=l3->next;
        
       new_node->val = x;
        new_node->next=l3;
        l3->next=new_node;
        return l3;
    }*/

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     int a=0,sum1=0,i=0;
    ListNode* l3=NULL;
	  while(l1->next!=NULL || l2->next!=NULL || a!=0)
      {
      	sum1=l1->val + l2->val + a;
         struct ListNode* new_node = new ListNode(sum1%10); 
          if(l3==NULL)
          l3=new_node;
          else{
           
        l3->next=new_node;
          a=sum1/10;
      	if(l1->next==NULL)
      	l1->val=0;
      	else
      	l1=l1->next;
		if(l2->next==NULL)
      	l2->val=0;
      	else
		l2=l2->next;
	  }
    return l3;
}
}
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {return !isspace(ch);}));}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

ListNode* stringToListNode(string input) {
    // Generate list from the input
    vector<int> list = stringToIntegerVector(input);

    // Now convert that list into linked list
    ListNode* dummyRoot = new ListNode(0);
    ListNode* ptr = dummyRoot;
    for(int item : list) {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
    }
    ptr = dummyRoot->next;
    delete dummyRoot;
    return ptr;
}

string listNodeToString(ListNode* node) {
    if (node == nullptr) 
        return "[]";
    string result;
    while (node) {
        result += to_string(node->val) + ", ";
        node = node->next;
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

int main()
 {
    string line;
    while (getline(cin, line)) {
        ListNode* l1 = stringToListNode(line);
        getline(cin, line);
        ListNode* l2 = stringToListNode(line);
        
        ListNode* ret = Solution().addTwoNumbers(l1, l2);

        string out = listNodeToString(ret);
        cout << out << endl;
    }
    return 0;
}
