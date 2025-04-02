#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll x;
    cin>>x;

    string ans="";
    while(x>0){
        ll rem=x%10;
        if((x/10)==0 && rem==9){
            rem=9;
        }
        else{
            rem=min(rem,9-rem);
        }
        string temp=to_string(rem);
        ans+=temp;
        x=x/10;
    }

    reverse(ans.begin(),ans.end());
    ll result=stoll(ans);
    return result;
}

int main(){
    cout<<solve()<<endl;
}