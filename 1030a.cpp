#include<bits\stdc++.h>
using namespace std;

int main()
{
    // while(1)
    // {
        int n;
    cin>>n;
    int a[n];
    int counter =0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            counter++;
        }
    }
    if(counter ==n)
    {
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
    // }
    
}