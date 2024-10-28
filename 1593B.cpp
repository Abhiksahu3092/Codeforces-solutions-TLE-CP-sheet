#include<bits/stdc++.h>
using namespace std;
#define ll long long

int count(string nums,string digit){
    int ops=0;
    char x=digit[0];
    char y=digit[1];
    int j=nums.size()-1;
    while(j>0 && nums[j]!=y){
        j--;
        ops++;
    }

    j--;
    while(j>0 && nums[j]!=x){
        j--;
        ops++;
    }
    return ops;
}

int solve(){
    ll n;
    cin>>n;
    vector<string> digits={"00","25","50","75"};
    string nums=to_string(n);
    int ans=INT_MAX;
    for(auto digit:digits){
        ans=min(ans,count(nums,digit));
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