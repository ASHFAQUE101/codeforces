#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// for checkhing 1 to n:

int main()
{

    while(1)
    {
        
    unsigned long long int n;
    cout<<"A number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
   
    int count =0;
     
    unsigned long long int sum = i;
    cout<<"\n\n"<<"Given Number: "<<sum<<endl;

    if(sum==1)
    {
        cout<<"4"<<endl;
        cout<<"2"<<endl;
        cout<<"1"<<endl;
        cout<<"Total step = 3"<<endl;

    }
    else
    {
        while(sum!=1)
         {
             count++;

             if(sum%2!=0)
            {
                sum= (3*sum +1);
                cout<<sum<<endl;
             }
             else
             {
                sum = sum/2;
                cout<<sum<<endl;
            }
         }
         cout<<"Total step: "<<count<<endl;
        count =0;
    }
    }
    }
    

    
     
    
}