
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
        vector<ll> a(2*n);
        for(ll i=0; i<2*n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll count_even=0, count_odd=0;
        for(ll i=0; i<2*n; i++)
        {
            if(a[i]%2==0)
                count_even++;
            else if(a[i]%2==1)
                count_odd++;
        }
        if(count_even==count_odd)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }

    return 0;
}
