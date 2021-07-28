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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        if(a[0]==a[n-1])
            cout << n << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}
