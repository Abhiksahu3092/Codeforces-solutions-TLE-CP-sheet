#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n,m;
    cin>>n>>m;

    int maxi=0;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            maxi=max(maxi,a[i][j]);
        }
    }

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==maxi){
                v.push_back({i,j});
            }
        }
    }

    if(v.size()==1){
        return maxi-1; 
    }
    
    int r1=v[0].first;
    int c1=v[0].second;
    int r2=v[1].first;
    int c2=v[1].second;
    
    if(c1==c2){
        int r3=-1;
        for(auto c:v){
            if(c.second!=c1){
                r3=c.first;
                break;
            }
        }

        if(r3==-1){
            return maxi-1;
        }

        for(auto it:v){
            if(it.first!=r3 && it.second!=c1){
                return maxi;
            }
        }

        return maxi-1;
    }
    else if(r1==r2){
        int c3=-1;
        for(auto r:v){
            if(r.first!=r1){
                c3=r.second;
                break;
            }
        }

        if(c3==-1){
            return maxi-1;
        }

        for(auto it:v){
            if(it.first!=r1 && it.second!=c3){
                return maxi;
            }
        }

        return maxi-1;
    }
    else{
        bool ans1=true;
        bool ans2=true;
        for(auto it:v){
            if(it.first!=r1 && it.second!=c2){
                ans1=false;
                break;
            }
        }

        for(auto it:v){
            if(it.first!=r2 && it.second!=c1){
                ans2=false;
                break;
            }
        }

        if(ans1 || ans2){
            return maxi-1;
        }
        else{
            return maxi;
        }
    }  
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}