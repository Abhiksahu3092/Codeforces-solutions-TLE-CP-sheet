#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    string p;
    string s;
    cin>>p>>s;

    ll i=0;
    ll j=0;
    ll lcount1=0;
    ll lcount2=0;
    ll rcount1=0;
    ll rcount2=0;
    bool l=false;
    bool r=false;
    if(p[0]=='R'){
        r=true;
    }
    else{
        l=true;
    }
        
    while(i<p.size()){
        if(p[i]=='R' && l){
            while(j<s.size()){
                if(s[j]=='L'){
                    lcount2++;
                }
                else{
                    break;
                }
                j++;
            }

            if(lcount2<lcount1 || lcount2>2*lcount1){
                return false;
            }
            lcount1=0;
            lcount2=0;
            l=false;
        }

        if(p[i]=='L' && r){
            while(j<s.size()){
                if(s[j]=='R'){
                    rcount2++;
                }
                else{
                    break;
                }
                j++;
            }

            if(rcount2<rcount1 ||  rcount2>2*rcount1){
                return false;
            }
            rcount1=0;
            rcount2=0;
            r=false;
        }

        if(p[i]=='L'){
            lcount1++;
            l=true;
        }
        else{
            rcount1++;
            r=true;
        }
        i++;            
    }

    if(l){
        while(j<s.size()){
            if(s[j]=='L'){
                lcount2++;
            }
            else{
                break;
            }
            j++;
        }

        if(lcount2<lcount1 || lcount2>2*lcount1){
            return false;
        }
        lcount1=0;
        lcount2=0;
        l=false;
    }

    if(r){
        while(j<s.size()){
            if(s[j]=='R'){
                rcount2++;
            }
            else{
                break;
            }
            j++;
        }

        if(rcount2<rcount1 ||  rcount2>2*rcount1){
            return false;
        }
        rcount1=0;
        rcount2=0;
        r=false;
    }

    if(j<s.size()){
        return false;
    }

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
            
    }
}