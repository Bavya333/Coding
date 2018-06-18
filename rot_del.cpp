#include<iostream>
#include<vector>
using namespace std;
vector<int> rot_del(vector<int> v,int k)
{
	int c=v[v.size()-1];
	v.insert(v.begin(),c);
	v.pop_back();
	vector <int>:: iterator it;
	if(k<=v.size())
		v.erase(v.end()-k);
	else
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
		int n,a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		for(int i=0;i<n-1;i++)
			v=rot_del(v,i+1);
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<"\n";
	}
}
//Rotate the array in clockwise direction once for every iteration and deletes the i-th last element.The last element that remains is the output.
