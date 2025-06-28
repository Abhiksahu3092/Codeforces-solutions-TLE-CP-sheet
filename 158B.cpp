#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;

    vector<int> s(n);
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==1){
            a++;
        }
        else if(s[i]==2){
            b++;
        }
        else if(s[i]==3){
            c++;
        }
        else{
            d++;
        }
    }

    int ans=d;
    int temp=min(a,c);
    ans+=temp;
    a-=temp;
    c-=temp;
    if(a==0){
        ans+=(c+ ceil(b/2.0));
    }
    else{
        if(b%2==0){
            ans+=(b/2 + ceil(a/4.0));
        }
        else{
            ans+=(b/2 +1);
            if(a>2){
                ans+= ceil((a-2)/4.0);
            }
        }
    }

    return ans;

}

int main(){
    int t;
    t=1;
    while(t--){
        cout<<solve()<<endl;
    }
}