#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    long long sum=0;
    sum=a[0]-1;
    for(int i=1;i<m;i++)
    {
        if(a[i]>a[i-1])sum+=a[i]-a[i-1];
        else if(a[i]<a[i-1])sum+=n-abs(a[i]-a[i-1]);
    }
    cout<<sum<<endl;
}
