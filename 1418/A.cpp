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
        ll x, y, k;
        cin >> x >> y >> k;
        ll trades=(k*(y+1)-1+(x-2))/(x-1);
        cout << trades+k << "\n";
    }

    return 0;
}
