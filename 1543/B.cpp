
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
   if(b==0)
   return a;
   return gcd(b, a%b);
}

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
        ll s=0;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            s+=x;
        }
        ll res=(s%n)*(n-(s%n));
        cout << res << "\n";
    }

    return 0;
}
