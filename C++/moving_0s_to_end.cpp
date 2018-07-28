#include<iostream>
using namespace std;
int main()
{
    int i,t,n,zero_count,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int *a=new int(n);
        //zero_count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
         //   if(a[i]=='0')
           //     zero_count++;
        }
        count=-1;
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                count++;
                a[count]=a[i];
            }
        }
        count++;
        while(count<n)
        {
            a[count]=0;
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";   
        }
        cout<<"\n";
    }
}
