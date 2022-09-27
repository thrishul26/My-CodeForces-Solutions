#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int count=0;
        cin>>n;
        //n denotes the length of the each string
        vector<char> a(n);
        vector<char> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='G')
            {
                a[i]='B';
            }
        }    
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            if(b[i]=='G')
            {
                b[i]='B';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(b[i]=='G')
            {
                b[i]='B';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
        }
        if(count==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}