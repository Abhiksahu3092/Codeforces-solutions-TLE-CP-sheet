#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t --){
		ll x;
		cin >> x;
		ll y = 1;
		while(y < x) y*=2;
		if(y == x+1 || y == x) cout << -1 << endl;
		else cout << (y-1)/2 <<endl;
	}
	return 0;
}