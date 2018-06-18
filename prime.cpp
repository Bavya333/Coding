#include<iostream>
using namespace std;
int main()
{
	int N=2;
	int flag=1;
	//cin>>N;
	for(int i=2;i<N/2;i++)
	{
		if(N%i==0)
			flag=0;
	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
}
