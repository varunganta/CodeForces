#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k, t;
    cin >> n >> k >> t;
    ll m=min(t, k);
    cout << min(m, n+k-t) << "\n";

    return 0;
}
