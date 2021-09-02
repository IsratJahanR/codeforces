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

   	//fastio()
   //	seive();
   	ll t; cin>>t;
    while(t--)
    {
        ll n,u,v,j,mx=0,mn,ans,i,a1,a2,b1,b2,f1,f2,res,temp=0,ii,nn;
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>f1>>f2;
        ans=abs(a1-b1)+abs(a2-b2);
        if(f1==a1 && f1==b1)
        {
            if(f2<=max(a2,b2) && f2>=min(a2,b2))ans+=2;
        }
        if(f2==a2 && f2==b2)
        {
            if(f1<=max(a1,b1) && f1>=min(a1,b1))ans+=2;
        }
        cout<<ans<<endl;


    }
    return 0;
}

