#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,N,a;
    cin>>t;
    while(t--)
    {
        cin>>N;
        vector <int> v;
        for(int i=0;i<N;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(v[i]>v[j])
                {
                    a=v[i];
                    v[i]=v[j];
                    v[j]=a;
                }
            }
        }
        for(int i=0;i<N;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
}
