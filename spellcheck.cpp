#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f;
        a=b=c=d=e=f=0;
        int n;
        cin>>n;
        vector<char> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]=='T')
            {
                a++;
            }
            else if(v[i]=='i')
            {
                b++;
            }
            else if(v[i]=='m')
            {
                c++;
            }
            else if(v[i]=='u')
            {
                d++;
            }
            else if(v[i]=='r')
            {
                e++;
            }
            else if(v[i]!= 'T' || v[i]!= 'i' || v[i]!= 'm' || v[i]!= 'u' || v[i]!= 'r')
            {
                f++;
            }
        }
        if(a==1 && b==1 && c==1 && d==1 && e==1 && f==0)
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