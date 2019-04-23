/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int func(int a)
{int rem;
    int multi =1;
    while(a>0)
    {rem=a%10;
    multi*=rem;
    a=a/10;
        
    }
    return multi;
}
int main()
{
    int n;
    cin>>n;
    int i=0,k=0;
    while(true)
    {
    if(func(i)==n)
    {
        k++;
        if(k==2)
        {
            cout<<i;
            return 0;
        }
        
    }
    i++;
    }
    return 0;
}
