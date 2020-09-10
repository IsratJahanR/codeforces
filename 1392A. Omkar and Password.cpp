#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],i;
        for(i=0;i<n;i++)cin>>a[i];
        vector<int >v;
        for(int i=1;i<n;i++)
        {
           if(a[i]==a[i-1]){v.push_back(a[i-1]); v.push_back(a[i]); i++;}
           else a[i]=a[i]+a[i-1];
        }
        int x=v.size();
        for(int i=0;i<x;i++)
        {
            cout<<v[i]<<" ";
        }
    }
}
