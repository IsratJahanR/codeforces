///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<set>
#include<iostream>
using namespace std;


//.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
//#define f               first
#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'
#define pob             pop_back

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
#define pll             pair <ll, ll>

int main(){

   	//fastio()
    //seive();
   	ll t; t=1;
   	cin>>t;

    while(t--)
    {
        ll n,m,j,mx1=0,mx=0,mn,i,res,temp=0,tmp1,tmp2,ii,nn,f,k,sum=0,c,e,ans=0,x,y;
        cin>>n;
        string s;
        cin>>s;
        int l=0,r=0,u=0,d=0;
        for(i=0;i<n;i++)
        {
           if(s[i]=='L')cout<<"L";
           else if(s[i]=='R')cout<<"R";
           else if(s[i]=='U')cout<<"D";
           else cout<<"U";
        }
        cout<<endl;

    }

 }


