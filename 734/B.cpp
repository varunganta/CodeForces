#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    ll n256=min(k2, min(k5, k6));
    ll n32=min(k2-n256, k3);
    ll res=32*n32+256*n256;

    cout << res << "\n";

    return 0;
}