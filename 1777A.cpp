#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(n==1){
        return 0;
    }

    int count=0;

    int parity;
    if (a[0] % 2 == 0){
        parity = 0;
    }
    else{
        parity = 1;
    }

    for (int i = 1; i < n; i++){
        int temp=a[i]%2;
        if(parity^temp==0){
            count++;
        }
        else{
            if(a[i]%2==0){
                parity=0;
            }
            else{
                parity=1;
            }
        }
    }
    return count;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}