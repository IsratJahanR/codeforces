#include<bits/stdc++.h>

///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
//#define f               first
//#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'

///.....................function..................>


#define Fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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


using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,i,s1=0,s2=0,i1,i2,p,j1,j2,j,x=0,a,b,sum=0;
        cin>>a>>b;
        string s;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')s1++;
            else if(s[i]=='1')s2++;
        }
        a=a-s1;
        b=b-s2;

        if(a<0 || b<0){cout<<-1<<endl; continue; }
        // cout<<a<<" "<<b<<endl;
        int f=0;
        for(i=0,j=n-1;i<j;i++,j--)
        {
           if(s[i]=='0')
            {
                if(s[j]=='0') continue;
                else if(s[j]=='1'){f=1; break;}
                else {s[j]='0'; a--;}
            }
            else if(s[i]=='1')
            {
                if(s[j]=='1') continue;
                else if(s[j]=='0'){f=1; break;}
                else {s[j]='1'; b--;}
            }
            else
            {
                if(s[j]=='1'){s[i]='1'; b--;}
                else if(s[j]=='0'){s[i]='0'; a--;}
            }
            if(a<0 || b<0){f=1; break;}
        }
            //cout<<f<<endl;
      if(f==1)cout<<-1<<endl;
      else
      {
         for(i=0,j=n-1;i<j;i++,j--)
         {

            if(s[i]=='?')
            {
                if(a>1)
                {
                    s[i]='0';
                    s[j]='0';
                    a-=2;
                }
                else if(b>1)
                {
                    s[i]='1';
                    s[j]='1';
                    b-=2;
                }
                else {f=1; break;}
            }
        }
        if(n%2==1)
        {
            if(a%2==1 && s[n/2]=='?')s[n/2]='0',a--;
            else if(b%2==1 && s[n/2]=='?')s[n/2]='1', b--;
        }
        if(f==1) cout<<-1<<endl;
        else
        {
            for(i=0;i<n;i++)cout<<s[i];
            cout<<endl;
        }


        }
      }

    return 0;
}
