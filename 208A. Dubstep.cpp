#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int >x;
    for(int i=0;i<n;i++)cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)sum++;
        }
    }
    cout<<sum<<endl;
}
