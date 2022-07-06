#include<bits\stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int capital=0,small=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
        else
            small++;

    }
    if(small>=capital)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
        {
           s[i] = s[i]+32;
        }
        }
    }
    else if(small<capital)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
        {
           s[i] = s[i]-32;
        }
        }
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    
    
}