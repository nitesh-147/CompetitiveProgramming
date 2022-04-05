#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        vector<int> v(n);
        for(int j=0;j<n;j++)
        cin>>v[j];

        sort(v.begin(),v.end());
        int ans = 0;
        for(int i=0;i<n;i++){
            if(ans<v[i])
            ans++;
        }
        cout<<"Case #"<<i<<": ";
        cout<<ans<<endl;
    }
    return 0;
}
