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
    for(ll i=0; i<t; i++)
    {
        ll h, m;
        cin >> h >> m;
        ll res=h*60+m;
        cout << (24*60-res) << "\n";
    }

    return 0;
}