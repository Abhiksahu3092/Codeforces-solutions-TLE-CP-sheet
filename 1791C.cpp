#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;

    string a;
    cin>>a;

    int i=0;
    int j=n-1;
    while(i<j){
        if((a[i]=='0' && a[j]=='1') || (a[i]=='1' && a[j]=='0')){
            i++;
            j--;
        }
        else{
            break;
        }
    }

    return j-i+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}