#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int white=0;
    int black=0;
    int i=0;
    int j;
    for(j=0;j<=i+k-1;j++){
        if(s[j]=='B'){
            black++;
        }
        else{
            white++;
        }
    }

    int ans=white;

    while(j<n){
        if(s[j]=='B'){
            black++;
        }
        else{
            white++;
        }

        if(s[i]=='B'){
            black--;
        }
        else{
            white--;
        }

        ans=min(ans,white);
        
        i++;
        j++;
    }

    return ans;

    //return white;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}