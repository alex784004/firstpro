#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
int b;
cin>>b;
      vector<vector<int>> g(a*b);
      
  
for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
          for (int ii = 0; ii < a; ii++) {
            for (int jj = 0; jj < b; jj++) {
              if (i != ii && j != jj && i - j != ii - jj && i + j != ii + jj) {
                g[i * a + j].push_back(ii * b + jj);
              }
            }
          }
        }
      }
  for (int i = 0; i < g.size(); i++) { 
        for (int j = 0; j < g[i].size(); j++) 
            cout << g[i][j] << " "; 
        cout << endl; 
    } 
	return 0;
	
}
