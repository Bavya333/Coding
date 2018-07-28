#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    string s[2000];
    string str;
    while(t--)
    {
        cin>>str;
        j=0;
        for(i=0;i<str.length();i++)
        {
            if(str[i]!='.')
            {
                s[j]+=str[i];
            }
            else
            {
                j++;
            }
        }
        for(i=j;i>=0;i--)
        {
            if(i!=0)
                cout<<s[i]<<".";
            else
                cout<<s[i]<<"\n";
        }
        for(i=0;i<=j;i++)
            s[i].clear();
        str.clear();
    }
}
