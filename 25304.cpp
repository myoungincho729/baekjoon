#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, a, b;
    cin >> n >> t;
    for (int i=1;i<=t;i++){
        cin >> a >> b;
        n -= a * b;
    }
    if (!n) cout << "Yes";
    else cout << "No";
}