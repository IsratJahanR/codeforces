///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
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
   	ll t; //t=1;
    cin>>t;

    while(t--)
    {
        ll n,m,j,mx1=0,mx=0,mn,i,res,temp=0,tmp1,tmp2,ii,nn,k,sum=0,e,ans=0;
        lli a1,s1,x,y,p;
        vector<int>a,b,s;
        cin>>a1>>s1;
        int f=0;
        while(a1!=0 || s1!=0)
        {
            x = a1%10;
            y = s1%10;
            if(x<=y)
            {
                b.pb(y-x);
                a1/=10;
                s1/=10;
            }
            else if(s1>9)
            {

              s1/=10;
              int p = (s1%10)*10+y;
              //cout<<p<<" ";
              if(p-x>9 || p-x<0)
              {
                  f=1;
                  break;

              }
              b.pb(p-x);
              a1/=10;
              s1/=10;
            }
            if(s1<a1)
            {
                f=1;
                break;
            }
        }
        if(f==1)cout<<-1<<endl;
        else
        {
            int f=0;
            for(i=b.size()-1;i>=0;i--)
            {
                if(b[i]!=0 && f==0)f=1;
                if(f==1)cout<<b[i];
            }
            cout<<endl;

        }


    }

 }



