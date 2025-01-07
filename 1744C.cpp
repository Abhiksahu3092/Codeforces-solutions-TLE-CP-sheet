#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    char c;
    cin>>n>>c;

    string s;
    cin>>s;

    if(c=='g'){
        return 0;
    }

    int freq=0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            freq++;
        }
    }

    int i=0;
    int ans=0;
    bool found=false;
    int temp=0;
    int dis=0;
    while(freq>0){
        if(s[i]==c && !found){
            found=true;
            temp++;
        }
        else if(s[i]==c && found){
            temp++;
        }
        else if(s[i]=='g' && found){
            ans=max(ans,dis);
            found=false;
            freq-=temp;
            temp=0;
            dis=0;
        }

        if(found){
            dis++;
        }

        i=(i+1)%n;
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

