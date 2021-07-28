#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    ll count=0;
    cin >> n >> m;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            int x, y;
            cin >> x >> y;
            if(x+y>=1)
                count++;
        }
    }
    cout << count << "\n";

    return 0;
}
