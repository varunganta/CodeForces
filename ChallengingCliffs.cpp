
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
        if(n==2)
        {
            cout << a[0] << " " << a[1] << "\n";
            continue;
        }
        ll pos=-1, m=LLONG_MAX;
        for(ll i=1;i<n; i++)
        {
            if(m>abs(a[i]-a[i-1]))
            {
                pos=i;
                m=abs(a[i]-a[i-1]);
            }
        }
        for(ll i=pos; i<n; i++)
            cout << a[i] << " ";
        for(ll i=0; i<pos; i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
