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
#define mll             map<ll,ll>

///.....................function..................>


#define Fast            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<int>())
#define reverse(a)      reverse(a.begin(),a.end())
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";

//const int N = 200005;

int main()
{
    //Fast
    ll tc=1; cin>>tc;
    while(tc--)
    {
        ll n,k,i,ans=0,s1=0,s2=0,j,mx,mn;
        cin>>n;
        ll a[n];
         bool f=0;
         set<int> s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)f=1;
        }
        sort(a,a+n);
        if(f==1)cout<<"NO"<<endl;
        else
        {
           cout<<"YES"<<endl;
           ans=a[n-1]+1;
           if(a[0]==0)
           {
               ans++;
               cout<<ans<<endl; cout<<0<<" ";
           }
           else cout<<ans<<endl;
           for(i=1;i<=a[n-1]+1;i++)
           {

              cout<<i<<" ";

           }
           cout<<endl;

        }


    }
    return 0;
}



