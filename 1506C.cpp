#include<bits/stdc++.h>
using namespace std;

int solve(){
    string a,b;
    cin>>a>>b;

    int n1=a.size();
    int n2=b.size();
    int ans=n1+n2;

    for(int i=0;i<n1;i++){
        for(int j=i;j<n1;j++){
            string check1=a.substr(i,j-i+1);

            for(int l=0;l<n2;l++){
                for(int m=l;m<n2;m++){
                    string check2=b.substr(l,m-l+1);

                    if(check1==check2){
                        ans=min(ans,n1+n2-2*(j-i+1));
                    }
                }
            }
        }
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}