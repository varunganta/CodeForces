#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
            cin >> a[i];
        if(k%2==0)
            k=2;
        else
            k=1;
        while(k--)
        {
            ll d=LLONG_MIN;
            for(ll i=0; i<n; i++)
                d=max(d, a[i]);
            for(ll i=0; i<n; i++)
                a[i]=d-a[i];
        }
        for(ll i=0; i<n; i++)
            cout << a[i] << " ";
        cout << "\n";

    }

    return 0;
}
