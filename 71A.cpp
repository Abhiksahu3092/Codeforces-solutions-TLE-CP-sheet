#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int count=0;
        char first=s[0];
        char last=s[s.size()-1];

        for(int i=0;i<s.size();i++){
            count++;
        }

        if(count>10){
            cout<<first<<count-2<<last<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}