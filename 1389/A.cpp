#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        if(l*2<=r)
            cout << l << " " << 2*l << "\n";
        else
            cout << -1 << " " << -1 << "\n";
    }

    return 0;
}
