#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a,t,N,flag;
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
			flag=0;
			for(int j=i+1;j<N;j++)
			{
				if(v[j]>v[i])
				{
					cout<<v[j]<<" ";
					flag++;					
					break;		
				}
			}
			if(!flag)
				cout<<"-1 ";
		}
		cout<<"\n";
	}
}
