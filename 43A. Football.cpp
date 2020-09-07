#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a; cin>>t;
    //vector< string > st;
    string st;
    for(int i=0;i<t;i++)
    {
        cin>>st;
    }
    //sort(st.begin(),st.end());
    int sum1=0,sum2=0;
    string s,ss;
    for(int i=1;i<t;i++){
    if(st[i]==st[0])sum1++;
    else {sum2++;     s=st[i]; }

    }
    if(sum1>sum2)cout<<st[0]<<endl;
    else cout<<s<<endl;
}
