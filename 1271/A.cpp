#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll cost=0;
    ll type1=min(a, d);
    ll type2=min(b, min(c, d));
    if(e>f)
    {
        cost=e*type1+f*max(0LL, min(b, min(c, d-type1)));
        cout << cost << "\n";
    }
    else
    {
        cost=f*type2+e*max(0LL, min(a, (d-type2)));
        cout << cost << "\n";
    }
    return 0;
}