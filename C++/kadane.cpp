#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int a,max_so_far,end,t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        max_so_far=v[0];
        end=v[0];
        for(i=1;i<n;i++)
        {
           end = max(v[i], end+v[i]);
           max_so_far = max(max_so_far, end);
        }
        cout<<max_so_far<<"\n";
        v.clear();
    }
}
