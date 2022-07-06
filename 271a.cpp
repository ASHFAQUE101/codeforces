#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
   while (n)
    {
       
        int counter =0;
        n++;
        stringstream k;
        k<<n;
        string s;
        k>>s;
        for(int j=0;j<s.length();j++)
        {
            for(int k=j+1;k<s.length();k++)
            {
                if(s[j] != s[k])
            {
            }
            else{
                counter++;
            }
            
        }
            }
            
        if(counter == 0)
        {
            cout<<n<<endl;
            return 0;
        }
        else{
            continue;
        }
    }
}