#include<iostream>
using namespace std;
int main()
{
    int t,n,i,max,max1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int *a=new int(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        max1=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>max1)
                max1=a[i];
        }
        max=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>max && a[i]!=max1)
                max=a[i];
        }
        cout<<max<<"\n";
    }
}
