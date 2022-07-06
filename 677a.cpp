#include<bits\stdc++.h>
using namespace std;

int main()
{
    // while(1)
    // {
    int n,h;
    cin>>n>>h;
    int a[n];
    int width =0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            width+=2;
        }
        else if (a[i]<=h)
        {
            width+=1;
        }
    }
    cout<<width<<endl;
    // }
    
}