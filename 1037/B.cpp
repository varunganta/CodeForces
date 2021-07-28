#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, s, count=0;
    cin >> n >> s;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(ll i=0; i<n; i++)
    {
        if(a[i]>s && 2*i+1<=n)
            count+=a[i]-s;
        else if(a[i]<s && 2*i+1>=n)
            count+=s-a[i];
    }
    cout << count << "\n";

    return 0;
}
