#include<bits/stdc++.h>
using namespace std;

int main(){
    int mn, se, tim, tot = 60 * 24;
    cin >> mn >> se >> tim;
    tot += 60 * mn + se + tim;
    tot %= 1440;
    cout << tot/60 << " " << tot%60;
}