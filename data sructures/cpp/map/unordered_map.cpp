#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std; 
  
int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<int,char> umap; 
  unordered_map<int,char> :: iterator itr; 
  unordered_map<int,char> :: iterator tr;   
    // inserting values by using [] operator 
    umap.insert(make_pair(0,'a'));  
    umap.insert(make_pair(1,'b')); 
    umap.insert(make_pair(2,'c'));
    umap.insert(make_pair(3,'d'));
	umap.insert(make_pair(4,'e'));
	umap.insert(make_pair(5,'f'));  

    for (auto x : umap) 
      cout << x.first << " " << x.second << endl; 
      cout<<umap.begin()->first;
       unordered_map<int,char> umap; 
   for (auto x : umap) 
      cout << x.first << " " << x.second << endl; 
} 	
