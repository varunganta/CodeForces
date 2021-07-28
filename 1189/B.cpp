#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if(a[n-1]>=a[n-2]+a[n-3])
        cout << "NO" << "\n";
    else
    {
        ll temp=a[n-2];
        a[n-2]=a[n-1];
        a[n-1]=temp;
        cout << "YES" << "\n";
        for(ll i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }


    return 0;
}
