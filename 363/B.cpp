#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    //cin >> n >> k;
    //vector<ll> a(10000);
    ll a[1000006];
    while(cin >> n >> k)
    {
        ll pos;
        for(ll i=0; i<n; i++)
            cin >> a[i];
        ll s=0;
        for(ll i=0; i<k; i++)
            s+=a[i];
        pos=0;
        ll mn=s;
        for(ll i=1; i+k-1<n; i++)
        {
            s-=a[i-1];
            s+=a[i+k-1];
            if(s<mn)
            {
                pos=i;
                mn=s;
            }
        }
        cout << pos+1 << "\n";
    }

    return 0;
}
