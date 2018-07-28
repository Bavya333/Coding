#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,N,j,sum,k,flag=0;
		cin>>N>>sum;
		vector <int> n;
		int *v=new int[N]();
		for(int i=0;i<N;i++)
		{
			cin>>a;
			n.push_back(a);
		}
		for(int i=0;i<N;i++)
		{
			for(j=0,k=i;j<N,k<N;j++,k++)
			{
				v[j]+=n[k];
				if(v[j]==sum)
				{
					flag=1;
					cout<<j+1<<" "<<k+1<<"\n";
					break;
				}
			} 
			if(flag)
				break;
		}
		if(!flag)
			cout<<"-1";
	}
}
