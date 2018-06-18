#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int> v)
{
	int c=v[v.size()-1];
	v.pop_back();
	v.insert(v.begin(),c);
	return v;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <int> v;
		int n,a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		v=rotate(v);
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<"\n";
	}
}
//Rotate the array in clockwise direction for d elements.
