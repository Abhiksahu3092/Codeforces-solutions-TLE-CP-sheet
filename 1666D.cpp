#include<bits/stdc++.h>
using namespace std;

string solve(){
    string s,t;
    cin>>s>>t;

    int i=0;
    int j=0;
    unordered_map<char,int> freq1;
    unordered_map<char,int> freq2;
    for(int l=0;l<s.size();l++){
        freq1[s[l]]++;
    }

    for(int m=0;m<t.size();m++){
        freq2[t[m]]++;
    }

    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            if(freq1[s[i]]==freq2[t[j]]){
                freq1[s[i]]--;
                freq2[t[j]]--;
                j++;
            }
            else if(freq1[s[i]]>freq2[t[j]]){
                freq1[s[i]]--;
            }
            else{
                return "NO";
            }
        }
        else{
            freq1[s[i]]--;
        }
        i++;
    }

    if(j==t.size()){
        return "YES";
    }

    return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}