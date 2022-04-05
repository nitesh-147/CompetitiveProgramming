// link to Question : https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7021
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        string stri,stro;
        cin>>stri>>stro;
       
        int count=0,ans=0;
        bool flag = true;

        for(int i=0;i<stro.size();i++){
            if(stri[i]==stro[i])
            continue;
            else if(stri[i]=='\0'){
                if(stro[i] != '\0'){
                     auto it = stro.begin()+i;
                stro.erase(it);
                 i--;
                count++;
                }
            }
            else if(stri[i]!=stro[i] && stro[i]!='\0')
            {
                auto it = stro.begin()+i;
                stro.erase(it);
                i--;
                count++;
            }
        }

        if(stri == stro){
            cout<<"Case #"<<i<<": "<<count<<endl;
        }
        else if(flag == false)
        cout<<"Case #"<<i<<":"<<" IMPOSSIBLE"<<endl;
        else{
            cout<<"Case #"<<i<<":"<<" IMPOSSIBLE"<<endl;
        }

    }
    return 0;
}
