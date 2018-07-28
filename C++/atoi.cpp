{
 #include <bits/stdc++.h>
using namespace std;
int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
int atoi(string str)
{
    int ans,temp,flag,i,count,neg;
                neg=0;
                flag=0;
                ans=0;
                count=0;
                if(str[0]=='-')
                    neg=1;
                if(str[str.length()-1]>=48 && str[str.length()-1]<=57)
                {
                ans=str[str.length()-1]-48;
                for(i=str.length()-2;i>=0;i--)
                {
                        count++;
                        if(str[i]>=48 && str[i]<=57)
                        {
                                temp=ans;
                                ans=str[i]-48;
                                ans=ans*pow(10,count);
                                ans=ans+temp;
                        }
                        else if(str[i]=='-')
                            break;
                        else
                        {
                                flag=1;
                                break;
                        }

                }
                str.clear();
                if(flag)
                        return -1;
                else
                        return (neg)?(ans*-1):ans;
                }
                else
                    return -1;
}
