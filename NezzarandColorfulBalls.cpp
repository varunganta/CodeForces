
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
        ll count=0, mx=0, prev=0;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            if(x!=prev)
                count=0;
            count++;
            if(mx>count)
                mx=mx;
            else
                mx=count;
            prev=x;
        }
        cout << mx << "\n";
    }

    return 0;
}
