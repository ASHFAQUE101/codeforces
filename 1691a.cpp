#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int m=0,n;
    int b[2];

    for(int i=0;i<t;i++)
    {
        cin>>n ;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
           {
               m++;
           }
        }

    b[i]=abs(min(m,n-m));

    }

    for(int i =0;i<t;i++)
    {
        cout<<b[i]<<endl;
    }
}

