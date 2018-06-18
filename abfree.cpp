#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count;
	for(int i=0;i<n;i++)
	{
		int l=s.length()-2;
		if(s[i]==s[i+1])
		{
			s.erase(s.begin()+i,s.begin()+1+1);
			s.insert(i,'ab');
		}
		else if(i<=l)
			abfree(s);
		else
			return s;
			
	}
}
