#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    string s;
    cin >> n;
	cin >> s;
	int k = s[0] == '1';
	for (int i = 1; i < n; i++){
		if (s[i] != s[i - 1]){
		    k++;
		}
	}
	if (k == 2){
	    k = 1;
	}
	else if(k > 2){
	    k -= 2;
	}
	return n+k;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cout<<solve()<<endl;
	}

}