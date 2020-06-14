#include <bits/stdc++.h> 
using namespace std; 
#define int long long
# define pii pair<int,int>
const int maxn=1e6+5;
signed main() { 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> arr(n),num(1000100),div(1000100);
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	num[arr[i]]++;
    }
    for(int i=1;i<=1000000;i++)
    {
    	for(int j=i;j<=1000000;j+=i)
    		div[j]+=num[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
    	if(div[arr[i]]==1)ans++;
    }
    cout<<ans;
}
