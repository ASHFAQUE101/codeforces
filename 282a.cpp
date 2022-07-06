#include<bits\stdc++.h>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n][3];
    int x=0;

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>s[i][j];
        }
        for(int j=0;j<3;j++)
        {
            if(s[i][j]=='+')
            {
                x++;
                break;
            }
            else if(s[i][j]=='-')
            {
                x--;
                break;
            }
        }
    }
    cout<<x<<endl;
}
