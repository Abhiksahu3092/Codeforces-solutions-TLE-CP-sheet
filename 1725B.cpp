#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,d;
    cin>>n>>d;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int j=n-1;
    int count=0;
    sort(a.begin(),a.end());
    while(a[j]>d && j>=0){
        j--;
        count++;
    }

    int i=0;
    int sum=a[j];
    while(i<j){
        if(sum+a[j]<=d){
            i++;
            sum+=a[j];
        }
        else{
            count++;
            i++;
            j--;
            sum=a[j];
        }
    }

    return count;
}

int main(){
    cout<<solve()<<endl;
}