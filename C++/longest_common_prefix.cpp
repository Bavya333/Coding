#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int t,n,i;
    vector <string> v;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        s=string(v[0]);
        for(i=1;i<n;i++)
        {
            j=0;
            while(s[j]==v[i][j])
                j++;
            s.erase(j,s.length()-j);
            i++;
        }
    }
}
