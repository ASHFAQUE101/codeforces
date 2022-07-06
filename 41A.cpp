#include<bits\stdc++.h>
using namespace std;

int main()
{
    // while(1)
    // {

    // }
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int counter =0;
    for(int i =0, j=s2.length()-1;i<s1.length(),j>=0;i++,j--)
    {
        if(s1[i]==s2[j])
        {
            counter++;
        }
    }
// cout<<s1.length()<<" "<<s2.length()<<" "<<counter<<endl;
    
    if(counter == s2.length())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}