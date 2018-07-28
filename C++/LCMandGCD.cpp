#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    int t,LCM,GCD,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        GCD=gcd(a,b);
        LCM=((a*b)/GCD);
        cout<<LCM<<" "<<GCD<<"\n";
    }
}
