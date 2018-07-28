#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,a,i,count,maxi,prev;
  cin>>t;
  while(t--)
  {
    maxi=INT_MIN;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++)
    {
      cin>>a;
      if(a>maxi)
        maxi=a;
      v.push_back(a);
    }
    count=0;
    prev=v[0];
    for(i=1;i<n;i++)
    {
      if(prev-v[i]<0)
        count++;
      prev=v[i];
    }

    switch(count)
    {
    case 0:
      cout<<maxi<<" "<<'2';
      break;
    case 1:
      cout<<maxi<<" "<<'3';
      break;
    default:
      if(count==n-1)
        cout<<maxi<<" "<<'1';
      else
        cout<<maxi<<" "<<'4';
    }
    cout<<"\n";
  }
}
