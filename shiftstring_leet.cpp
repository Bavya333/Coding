  string shiftingLetters(string S, vector<int>& shifts) {
        
        vector<int>::iterator it;
        long long int *a=new long long int(shifts.size());
        long long int n=shifts.size();
        if(shifts.begin()!=shifts.end())
        {
        it=shifts.end();
        it--;
        long long int temp=*it;
        a[n-1]=*it;
        int i,ass;
        if(it!=shifts.begin())
        {
        it--;
        for(;i>0,it!=shifts.begin();it--,i--)
        {
            a[i]=*it+temp;
            temp=a[i];
        }
        a[0]=*it+temp;
        }
        for(i=0;i<S.length();i++)
        {
            ass=S[i]+(a[i]%26);
            if(ass>122)
            {
                ass=ass-122;
                S[i]=96+ass;
            }
            else
                S[i]=ass;
        }
        }
        return S;
    }
