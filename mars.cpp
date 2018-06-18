#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag=0,n=s.length();
	for(int i=1;i<=n;i++)
	{
		int c=i%3;
		switch(c)
		{
			case 1:if(s[i-1]!='S')
					flag++;
				break;
			case 2:if(s[i-1]!='O')
					flag++;
				break;
			case 0:if(s[i-1]!='S')
					flag++;
				break;
	
		}
	}
	cout<<flag;
}
