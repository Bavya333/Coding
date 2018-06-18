#include<iostream>
#include<cstring>
#include<set>
using namespace std;
int main()
{
    int dflag=1,lflag=1,uflag=1,cflag=1,flag=0,l=0,L=0;
    cin>>l;
    string s;
    cin>>s;
    set <char> st;
    st.insert('!');
    st.insert('@');
    st.insert('#');
    st.insert('%');
    st.insert('^');
    st.insert('&');
    st.insert('*');
    st.insert('(');
    st.insert(')');
    st.insert('-');
    st.insert('+');
    for(int i=0;i<l;i++)
    {
        if(isdigit(s[i]))
		dflag=0;
	if(islower(s[i]))
		lflag=0;
        if(isupper(s[i]))
		uflag=0;
	if(st.find(s[i])!=st.end())
		cflag=0;
    }
    flag=dflag+lflag+uflag+cflag;
	//cout<<"***"<<flag<<"***";
    if(l<6)
    {
        L=6-l;
        if(L>flag)
            cout<<L;
        else
            cout<<flag;
    }
    else
       cout<<flag;
}
