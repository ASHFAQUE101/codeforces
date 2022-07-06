#include<bits\stdc++.h>
using namespace std;
int main()
{
    // while(1)
    // {
    int n;
    cin>>n;
    int room=0;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if((b-a)>=2)
        {
            room++;
        }
    }
    cout<<room<<endl;
    // }
    
}

