#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m ,p;
    cin >> n >> m >> p;
    ll a[n], b[m];
    ll res1=0, res2=0;
    for(ll i=0; i<n; i++)
        cin >> a[i];
    for(ll i=0; i<m; i++)
        cin >> b[i];
    while(a[res1]%p==0)
        res1++;
    while(b[res2]%p==0)
        res2++;
    ll res=res1+res2;
    cout << res << "\n";

    return 0;
}
