#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
   vector<int> v;
   int d;
   char c;
   stringstream s(str);
   s>>d>>c;
   while(d || int(c))
   {
	v.push_back(d);
	cout<<v.back();
	s>>d>>c;
   }
   return v;
}

int main() 
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
   /* for(int i = 0; i < integers.size(); i++) 
    {
        cout << integers[i] << "\n";
    }*/
    
    return 0;
}

