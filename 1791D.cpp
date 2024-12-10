#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int> left,right;
    left[s[0]]=1;
    for(int i=1;i<n;i++){
        right[s[i]]++;
    }

    int ans=left.size()+right.size();
    for(int i=1;i<n;i++){
        left[s[i]]++;
        if(right[s[i]]==1){
            right.erase(s[i]);
        }
        else{
            right[s[i]]--;
        }

        ans=max(ans,(int)(left.size()+right.size()));
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