#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int> v)
{
	int c=v[0];
	v.insert(v.end(),c);
	v.erase(v.begin());
	return v;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <int> v;
		int n,a,k;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		cin>>k;
		for(int i=1;i<=k;i++)
			v=rotate(v);
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<"\n";
	}
}
//Rotate the array in clockwise direction for d elements.
