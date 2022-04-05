#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int dhiraj=1;dhiraj<=t;dhiraj++)
    {
        int r,c; cin>>r>>c;
        cout<<"Case #"<<dhiraj<<":"<<endl;
        for(int i=1;i<=(2*r)+1;i++){
            for(int j=1;j<=(2*c)+1;j++){
                if(i%2!=0){
                    if(i==1 && (j==1 || j==2))
                    cout<<".";
                    else{
                        if(j%2 == 0)
                        cout<<"-";
                        else
                        cout<<"+";
                    }
                }
                else{
                    if(i==2 && (j==1 || j==2))
                    cout<<".";
                    else{
                        if(j%2==0)
                        cout<<".";
                        else
                        cout<<"|";
                    }
                }
            }
            cout<<endl;
        }
    }
    
    return 0;
}
