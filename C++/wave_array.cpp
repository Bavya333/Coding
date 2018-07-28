#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,a,temp;
    cin>>t;
    vector <int> v;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i=i+2)
        {
            if(i+1!=n)
            {
                temp=v[i+1];
                v[i+1]=v[i];
                v[i]=temp;
            }
        }
        for(i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        v.clear();
    }
}
