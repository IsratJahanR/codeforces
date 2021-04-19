///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
using namespace std;

///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
#define f               first
#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'

///.....................function..................>

#define fastio()        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<>())
#define reverse(a)      reverse(a.begin(),a.end())
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";



int main()
{


    int tc; cin>>tc;
    while(tc--)
    {
        ll mx=0,n,x,r1=0,r2=0,y,p,k,b,ans,i;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=n-1;i>=0;i--)
        {
           if(a[i]>1)
           {
               x=a[i];
               p=i;
               while(p>=0 && x>=1)
               {

                   a[p]=1;
                   x--;
                   p--;
                   x = max(a[p],x);
               }
               i=p;
           }
        }
        for(i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;

    }
    return 0;
}


