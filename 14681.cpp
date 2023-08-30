#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, cur = 0;
    cin >> x >> y;
    int ar[4] = {3, 2, 4, 1};
    if (x > 0) cur += 2;
    if (y > 0) cur += 1;
    cout << ar[cur];
}