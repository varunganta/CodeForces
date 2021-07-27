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
        ll a, b;
        cin >> a >> b;
        if(a==b)
            cout << 0 << " " << 0 << "\n";
        else
        {
            ll g=abs(a-b);
            if(a<b)
                swap(a, b);
            cout << abs(a-b) << " " << min(b%g, g-(b%g)) << "\n";
        }
    }

    return 0;
}

