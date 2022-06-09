///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<set>
#include<iostream>
#include<vector>
using namespace std;


//.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
#define F               first
#define S               second
#define mp              make_pair
#define I               insert
#define endl            '\n'
#define pob             pop_back
#define inf             1e9+9
#define setpoint(x)     setprecision(x)<<fixed

const int         N   = (int) 2e5 + 5;
const int         MxN = (int) 1e6 + 6;
const int         MOD = (int) 1e9 + 7;
const int         INF = (int) 1e9 + 9;
const double      EPS = (double) 1e-9;
const long double PI  = 3.14159265358979;
const lli M =998244353;

///.....................function..................>

#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
//sort(a,a+3,greater<ll>());
#define rsort(v)        sort(v.rbegin(),v.rend())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<int>())
#define reverse(a)      reverse(a.begin(),a.end())
#define str(a)          a.begin(),a.end()
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";
#define pll             pair <ll, ll>


void solve()
{
      ll n,m,mx1=0,mx2=0,ans=0,i,j,sum=0,mn=1000000,l,k,mx=0,q,x,y;

      cin>>m>>n;
      string s[m];
      int x1=-1,y1=-1,x2=-1,y2=-1;
      for(i=0;i<m;i++) cin>>s[i];

      int f=0;
        x=-1;
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
             if(s[i][j]=='R')
             {
                 x1=i;
                 y1=j;
                 break;
             }

          }
          if(x1>=0)
          break;
      }
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
             if(s[j][i]=='R')
             {
                 x2=i;
                 y2=j;
                 break;
             }

          }
          if(x2>=0)
          break;

      }
      //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
      if(x1>=y2 || x2>=y1)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;



}
int main(){

   	//fastio()
   	ll tc; tc=1;
    cin>>tc;
    while(tc--)
    {
        //lli n,m,j,mx1=0,mx=0,mn=inf,i,res,temp=0,tmp1,tmp2,k,s2=0,ans=0,m1,m2,ff,p,g,q;
        ll x,y,b;
        string s;
        solve();

    }
}
