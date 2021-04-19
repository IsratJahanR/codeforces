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


    int tc; tc=1;
    //cin>>tc;
    while(tc--)
    {
        ll mx=0,n,x,r1=0,r2=0,y,p,k,b,ans,i,u,v,q,a,j;

        cin>>n>>k;
        string s;
        ans =0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            map <int, int > mp;
            ans++;
            while(a>0)
            {
                if(a%10<=k)mp[a%10]++;
                a=a/10;
            }
            for(j=0;j<=k;j++)
            {
                if(mp[j]==0){ans--; break;}
            }

        }
        cout<<ans<<endl;



    }
    return 0;
}



