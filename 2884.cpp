#include<bits/stdc++.h>
using namespace std;

int main(){
    int mn, se, tot = 0;
    cin >> mn >> se;
    tot += 60 * mn;
    tot += se;
    tot -= 45;
    if (tot < 0) tot += 60 * 24;
    cout << tot/60 << " " << tot%60;
}