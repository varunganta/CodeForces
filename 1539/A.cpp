#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tc;
    cin >> tc;
    while(tc--)
    {
        ll n, x ,t;
        cin >> n >> x >> t;
        ll res=max(0LL, n-1-(t/x))*(t/x);
        ll i=min(t/x, n-1);

        cout << res+i*(i+1)/2 << "\n";
    }

    return 0;
}