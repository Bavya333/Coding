#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> car;
    vector <int> penalty;
    int t,sum,n,date,i,a;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>date;
        for(i=0;i<n;i++)
        {
            cin>>a;
            car.push_back(a);
        }
        for(i=0;i<n;i++)
        {
           cin>>a;
           penalty.push_back(a);
        }
        if(date%2)
        {
            for(i=0;i<n;i++)
            {
                if(car[i]%2==0)
                    sum+=penalty[i];
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(car[i]%2)
                    sum+=penalty[i];
            }
        }
        cout<<sum<<"\n";
        car.clear();
        penalty.clear();
    }
}
