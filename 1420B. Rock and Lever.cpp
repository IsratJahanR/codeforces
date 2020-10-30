#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--){
        int n;
        cin>>n;
        long long a[n],ans;
        for(int i=0;i<n;i++)cin>>a[i];
        ans=0;
        for(int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                int p=a[i]&a[j];
                int q=a[i]^a[j];
                if(p>=q)ans++;
            }
        }

        cout<<ans<<endl;

    }
}
