#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int b,a;
    int cap=0;
    int j=0;
    int capacity[n];

    for(int i =0;i<n;i++)
    {
        cin>>a>>b;
        cap = cap-a;
        cap = cap+b;
        capacity[i]= cap;

    }
    int x = sizeof(capacity)/sizeof(capacity[0]);
    sort(capacity,capacity+x);
    cout<<capacity[n-1]<<endl;

    // if(cap>=0)
    //     {
    //         cout<<cap<<endl;

    //     }

    // else if(cap<0)
    //     {
    //         cout<<00<<endl;
    //     }
        
    
}