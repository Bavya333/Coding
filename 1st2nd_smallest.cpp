#include<iostream>
using namespace std;
int main()
{
    int t,n,i,first,second;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0 || n==1)
        {
            cout<<"-1"<<"\n";
            continue;
        }
        else
        {
        int *a=new int(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        first=a[0];
        second=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<first)
            {
                second=first;
                first=a[i];
            }
            else if(a[i]<second)
                second=a[i];
        }
        cout<<first<<" "<<second<<"\n";
        }
    }
}
