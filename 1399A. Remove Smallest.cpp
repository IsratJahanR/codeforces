
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,p=0; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
          if(a[i]-a[i-1]>1){p=1;  break; }
        }
        if(p==1)cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
}
