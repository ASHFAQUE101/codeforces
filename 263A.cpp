#include<bits\stdc++.h>
using namespace std;

int main()
{
    int i,j,n[50][50];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>n[i][j];
            
        }
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(n[i][j]==1)
            {
                cout<<abs(i-3)+ abs(j-3)<<endl;
    
            }
            
        }
        
    }

    return 0;
}