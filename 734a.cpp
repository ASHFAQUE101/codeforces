#include<bits\stdc++.h>
using namespace std;

int main()
{
    // while (1)
    // {
        int n;
    cin>>n;
    char s[n];
    int anton=0,danik=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=='A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if(anton>danik)
    {
        cout<<"Anton"<<endl;
    }
    else if (anton<danik)
    {
        cout<<"Danik"<<endl;
    }
    else if (anton == danik)
    {
        cout<<"Friendship"<<endl;
    }
    // }
    
    
}