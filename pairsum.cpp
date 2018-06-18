#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t,x,a,N,flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		vector <int> v;
		cin>>N>>x;
		for(int i=0;i<N;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		for(int i=0;i<N;i++)
		{
			for(int j=i+1;j<N;j++)
			{
				if((v[i]+v[j])==x)
				{
					flag++;
					break;
				}
			}
		}
		if(flag)
			cout<<"Yes"<<"\n";
		else
			cout<<"No"<<"\n";
	}
}
