#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,flag,a;
    cin>>t;
    vector <int> v;
    while(t--)
    {
        flag=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a*a);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(!flag)
                    break;
                if(find(v.begin(),v.end(),v[i]+v[j])!=v.end())
                {
                    flag=0;
                    cout<<"Yes\n";
                    break;
                }
            }
        }
        if(flag)
            cout<<"No\n";
        v.clear();
    }
}
