#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
        int n,g,ass;
        string s;
        cin>>n>>s>>g;
        for(int i=0;i<n;i++)
        {
                if(isalpha(s[i]))
                {
                        ass=s[i]+(g%26);
                        if(isupper(s[i]))
                        {
                                if(ass>90)
                                        cout<<char(64+(ass-90));
                                else
                                        cout<<char(ass);
                        }
                        else
                        {
                                if(ass>122)
                                        cout<<char(96+(ass-122));
                               	else
                                        cout<<char(ass);
                        }
                }
                else
                        cout<<s[i];
        }
}



