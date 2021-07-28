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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll res=LLONG_MAX;
        for(int i=0; i<2; i++)
        {
            ll m=min(n, a-x);
            ll p=min(n-m, b-y);
            res=min(res, (a-m)*1LL*(b-p));
            swap(a, b);
            swap(x, y);
        }
        cout << res << "\n";
    }

    return 0;
}