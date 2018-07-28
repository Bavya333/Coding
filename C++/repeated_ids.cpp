#include<iostream>
#include <bits/stdc++.h>
#include<iterator>
using namespace std;
int main()
{
    int t,n,a,i;
    cin>>t;
    while(t--)
    {
        vector <int> v;
        vector <int>::iterator it;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(find(v.begin(),v.end(),a)==v.end())
                v.push_back(a);
        }
        for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<"\n";
    }
}
