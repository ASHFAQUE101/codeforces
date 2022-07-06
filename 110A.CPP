#include<bits\stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;

//https://www.javatpoint.com/cpp-int-to-string
    stringstream k;
    k<<n;
    string s;
    k>>s;
    int counter =0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            counter++;
        }
    }
    if(counter==4 || counter ==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}