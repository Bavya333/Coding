#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int t,n,sum,a,max,i;
    cin>>t;
    vector <int> v;
    vector <int>::iterator it;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        while(v.size()>0)
        {
            max=v[0];
            for(i=1;i<v.size();i++)
            {
                if(v[i]>max)
                    max=v[i];
            }
            sum+=max;
            it=find(v.begin(),v.end(),max);
            if(it!=v.end())
                v.erase(it);
            it=find(v.begin(),v.end(),max-1);
            if(it!=v.end())
                v.erase(it);
        }
        cout<<sum<<"\n";
    }
}
