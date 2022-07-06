#include<bits\stdc++.h>
using namespace std;

int main()
{
    int i=0;
    string s;
    cin>>s;
    int j=0;
    int a[((s.length())/2)+1];
    for(i=0;i<s.length();i++)
    {
        if(s[i]!= '+')
        {
            a[j] = s[i] - 48;
            j++;
        }
       
    }
    
    int x =(sizeof(a)/sizeof(a[0]));
    sort(a,a+x);
    
    for(i=0;i<=x-2;i++)
    {
        cout<<a[i]<<"+";
    }
    cout<<a[x-1]<<endl;
}