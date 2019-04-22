#include<bits/stdc++.h>
int main()
{

    int a[100001],q,n,m,z,b[15],i,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>q;

           a[q]++;
    }
    cin>>t;
    while(t--)
    {
        cin>>m;
        if(a[m]>0)
        cout<<a[m]<<endl;
        else
        cout<<"NOT PRESENT\n";
    }


    return 0;
}
