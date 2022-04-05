#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        
    vector<long long int> a(4);
    for(int i=0;i<4;i++)
    cin>>a[i];

    vector<long long int> b(4);
    for(int i=0;i<4;i++)
    cin>>b[i];

    vector<long long int> c(4);
    for(int i=0;i<4;i++)
    cin>>c[i];

    vector<long long int> ans(4);
    long long int max_limit = 1000000;
    bool dhiraj = true;
    for(int i=0;i<4;i++){
        int min_num = min({a[i],b[i],c[i]});
        if(dhiraj == true){
        if(min_num <= max_limit){
            ans[i] = min_num;
            max_limit = max_limit - min_num;
        }
        else{
        ans[i] = max_limit;
        dhiraj = false;
        }
        }
        else
        ans[i]=0;
    }

    cout<<"Case #"<<i<<": ";
    if((ans[0]+ans[1]+ans[2]+ans[3])==1000000){
    for(int i=0;i<4;i++)
    cout<<ans[i]<<" ";
    }else{
        cout<<"IMPOSSIBLE";
    }
    cout<<endl;
    }
    return 0;
}
