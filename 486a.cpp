#include<bits\stdc++.h>
using namespace std;

int main()
{
    // while(1)
    //  { 
    long long n;
    long long sum=0;
    // int sum2=0;
    cin>>n;
    if(n%2==0)
    {
        sum= n/2;
    }
    else 
    {
        sum = ((n/2)+1)*(-1);
    }

    // for(int i=1;i<=n;i++)
    // {
      
    //     sum2 += ((pow(-1,i))*i);
    // }
    cout<<sum<<endl;
    // cout<<sum2<<endl;
    // }
    

}