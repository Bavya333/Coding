#include<iostream>
#include<list>
#include<algorithm>
#include<cmath>
using namespace std;
int fn(int m)
{
	int sum=0;
	while(m)
	{
		sum+=(m%10)*(m%10);
		m/=10;
	}
	return sum;
}
int happy(int m,int n,list <int> l)
{
	int flag=0;
	int ans=fn(m);
	if(ans==1)
	{
		flag=1;
	}
	else if(find(l.begin(),l.end(),ans) != l.end())
		flag=0;
	else
	{
		l.push_back(ans);
		flag=happy(ans,n,l);
	}	
	return flag;
}
int isprime(int n)
{
    if (n <= 1) 
	 return 0;
    for (int i=2; i<n; i++)
    {
	    if (n%i == 0)
	            return 0;
    } 
    return 1;
}
 
int main()
{
	int m,ans;
	cin>>m;
	list <int> l;
	l.push_back(m);
	if(happy(m,m,l) && isprime(m))
		cout<<"YES";
	else
		cout<<"NO";
}
