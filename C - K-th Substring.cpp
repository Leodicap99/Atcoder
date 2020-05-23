        #include <bits/stdc++.h>
        using namespace std;
        typedef long long ll;
        int main ()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
            string s;
            cin>>s;
            int k;
            cin>>k;
            set<string> st;
            for(int i=0;i<s.size();i++)
            {
                string p;
                for(int j=i;j<=i+k;j++)
                {
                    if(j>=s.size())break;
                    p+=s[j];
                    st.insert(p);
                }
            }
            vector<string> ans(st.begin(),st.end());
            sort(ans.begin(),ans.end());
            cout<<ans[k-1];
        	return 0;
        }
