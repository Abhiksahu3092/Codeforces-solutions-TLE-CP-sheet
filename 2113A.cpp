#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;

    if(x>y){
        swap(a,b),swap(x,y);
    }
	int ans=0;
	ans+=max(0,(int)floor((k-a)*1.0/x)+1),k-=ans*x;
	ans+=max(0,(int)floor((k-b)*1.0/y)+1);
	return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}