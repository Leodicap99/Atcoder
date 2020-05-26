#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
#define mod (int)(1e9 + 7) 
int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll l,r;
    cin>>l>>r;
    if((l-1)/2019 != (r-1)/2019)
    {
        cout<<0;
        return 0;
    }
    else
    {
        l=l%2019,r=r%2019;
        ll ans=2018;
        for(ll i=l;i<=r;i++)
        {
            for(ll j=i+1;j<=r;j++)
            ans=min(ans,(i*j)%2019);
        }
        cout<<ans;
    }
    return 0;
} 
