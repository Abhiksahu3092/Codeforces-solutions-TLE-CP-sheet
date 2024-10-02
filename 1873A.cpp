#include<bits/stdc++.h>
using namespace std;

int solve(){
    char c;
    int i,j;
    int count=0;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            cin>>c;
            if(c=='X'){
                count+=min(min(i,10-i+1),min(j,10-j+1));
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       cout<<solve()<<endl;
    }
}