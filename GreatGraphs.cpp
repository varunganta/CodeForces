
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll s=0;
        ll res=0;
        for(ll i=0; i<n-2; i++)
        {
            s+=a[i];
            res=res+s-a[i+2]*(i+1);
        }
        cout << res << "\n";
    }

    return 0;
}
