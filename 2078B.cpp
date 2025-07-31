#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n,k;
    cin>>n>>k;
	for(int i=1;i<n-1;i++){
		if(k%2==0){
            cout<<n-1<<" ";
        }
		else{
            cout<<n<<" ";
        }
	}
	cout<<n<<" "<<n-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}