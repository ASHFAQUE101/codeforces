#include<bits\stdc++.h>
using namespace std;

int main()
{
    // while(1)
    // {
        int n;
    cin>>n;
    int a[n+1];
    int b[110];

    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    for(int i=1;i<=n;i++)
    {
        b[a[i]]=i;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // }
    
}