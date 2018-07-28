//Changes to be made
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n,i,a,sum,count,left,avail;
    cin>>t;
    vector <int> v,need;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        left=v[0];
        need.push_back(0);
        for(i=1;i<n;i++)
        {
            count=0;
            while(1)
            {
                count++;
                avail=v[i]-v[i-count];
                if((v[i]>v[i-count]) && need[i-count])
                {
                    if(need[i-count]>=avail)
                    {
                        need[i-count]-=avail;
                        sum+=avail;
                    }
                    else
                    {
                        sum+=need[i-count];
                        need[i-count]=0;
                    }
                }
                else
                    break;
            }
            if(left-v[i]>0)
                need.push_back(left-v[i]);
            else
            {
                left=v[i];
                need.push_back(0);
            }
        }
        cout<<sum<<"\n";
        v.clear();
        need.clear();
    }
    return 0;
}
